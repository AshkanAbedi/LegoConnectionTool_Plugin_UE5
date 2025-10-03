﻿// Fill out your copyright notice in the Description page of Project Settings.
#include "LegoLevelSerializer.h"
#include "LegoActor.h"
#include "EngineUtils.h"
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

void ULegoLevelSerializer::SaveActorToImage(const ALegoActor* Actor, FLegoActorImage& OutImage)
{
	if (!Actor) return;

	OutImage.Version = 1;
	OutImage.Guid = Actor->UniqueActorGuid;
	OutImage.Transform = Actor->GetActorTransform();
	OutImage.Color = Actor->Color;
	OutImage.Shape = Actor->Shape;
	OutImage.Size  = Actor->Size;
	OutImage.ConnectedGuids.Reset();

	for (const FConnectionData& Connection : Actor->Connections)
	{
		if (const ALegoActor* Other = Connection.ConnectedActor.Get())
		{
			OutImage.ConnectedGuids.Add(Other->UniqueActorGuid);
		}
	}
}

bool ULegoLevelSerializer::SerializeLevelToJSON(UWorld* World, FString& OutJSON, const FString& FilePath)
{
	if (!World) return false;

	TArray<FLegoActorImage> Images;

	for (TActorIterator<ALegoActor> It(World); It; ++It)
	{
		ALegoActor* Actor = *It;
		FLegoActorImage NewImage;
		SaveActorToImage(Actor, NewImage);
		Images.Add(MoveTemp(NewImage));
	}

	TArray<TSharedPtr<FJsonValue>> JSONArray;
	for (const FLegoActorImage& Image : Images)
	{
		TSharedRef<FJsonObject> JSONObject = MakeShared<FJsonObject>();
		if (FJsonObjectConverter::UStructToJsonObject(FLegoActorImage::StaticStruct(), &Image, JSONObject, 0, 0))
		{
			JSONArray.Add(MakeShared<FJsonValueObject>(JSONObject));
		}
	}
	
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutJSON);
	if (!FJsonSerializer::Serialize(JSONArray, Writer))
	{
		return false;
	}

	if (!FilePath.IsEmpty())
	{
		FString AbsPath = FilePath;
		if (!FPaths::IsRelative(FilePath))
		{
			AbsPath = FilePath;
		}
		else
		{
			AbsPath = FPaths::ProjectSavedDir() / FilePath;
		}
		return FFileHelper::SaveStringToFile(OutJSON, *AbsPath);
	}
	return true;
}

bool ULegoLevelSerializer::LoadActorsFromImage(UWorld* World, const TArray<FLegoActorImage>& Images)
{
	if (!World) return false;
	
	TMap<FGuid, ALegoActor*> GuidToActor;
	for (TActorIterator<ALegoActor> It(World); It; ++It)
	{
		ALegoActor* Actor = *It;
		GuidToActor.Add(Actor->UniqueActorGuid, Actor);
	}

	for (const FLegoActorImage& Image : Images)
	{
		ALegoActor* Actor = GuidToActor.FindRef(Image.Guid);
		if (!Actor)
		{
			FActorSpawnParameters Params;
			Params.Name = *FString::Printf(TEXT("LegoActor_%s"), *Image.Guid.ToString(EGuidFormats::Digits));
			Actor = World->SpawnActor<ALegoActor>(ALegoActor::StaticClass(), Image.Transform, Params);
			if (!Actor) continue;

			Actor->UniqueActorGuid = Image.Guid;
			GuidToActor.Add(Image.Guid, Actor);
		}
		// Apply properties
		Actor->SetActorTransform(Image.Transform);
		Actor->Color = Image.Color;
		Actor->Shape = Image.Shape;
		Actor->ChangeShape();
		Actor->Size = Image.Size;
	}

	for (const FLegoActorImage& Image : Images)
	{
		if (ALegoActor* Actor = GuidToActor.FindRef(Image.Guid))
		{
			Actor->Connections.Reset();
			for (const FGuid& OtherGuid : Image.ConnectedGuids)
			{
				if (ALegoActor* ConnectedActor = GuidToActor.FindRef(OtherGuid))
				{
					if (!Actor->IsConnectedTo(ConnectedActor))
					{
						Actor->AddConnection(ConnectedActor);	
					}
				}
			}
		}
	}
	return true;
}

bool ULegoLevelSerializer::DeserializeLevelFromJSON(UWorld* World, const FString& InJSON)
{
	if (!World) return false;

	TArray<FLegoActorImage> Images;
	TArray<TSharedPtr<FJsonValue>> JSONValues;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(InJSON);
	if (!FJsonSerializer::Deserialize(Reader, JSONValues))
	{
		return false;
	}
	
	for (auto Value : JSONValues)
	{
		if (TSharedPtr<FJsonObject> Obj = Value->AsObject())
		{
			FLegoActorImage Image;
			if (FJsonObjectConverter::JsonObjectToUStruct(Obj.ToSharedRef(), FLegoActorImage::StaticStruct(), &Image, 0, 0))
			{
				Images.Add(MoveTemp(Image));
			}
		}
	}
	return LoadActorsFromImage(World, Images);
}




