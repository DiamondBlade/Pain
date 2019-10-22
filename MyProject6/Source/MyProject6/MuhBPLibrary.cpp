// Fill out your copyright notice in the Description page of Project Settings.


#include "MuhBPLibrary.h"
#include "GameFramework/Actor.h"
#include "Engine/Engine.h"

FString UMuhBPLibrary::GetLoud(FString MuhWords)
{
	return MuhWords.ToUpper();
}

FString UMuhBPLibrary::GetQuiet(FString MuhWords)
{
	return MuhWords.ToLower();
}

void UMuhBPLibrary::FlakShot(UObject* RefObj, TSubclassOf<AActor>Projectile, FVector Location, FRotator Rotation, int32 ShotsPerRow, int32 ShotsPerColumn, float ScatterH, float ScatterV)
{
	UWorld* const MuhWorld = GEngine->GetWorldFromContextObjectChecked(RefObj);

	for (int32 i = 0; i < ShotsPerColumn; i++)
	{
		Rotation += FRotator(i * ScatterV - (0.5f * ScatterH * ShotsPerColumn), 0.0f, 0.0f);

		for (int32 j = 0; j < ShotsPerRow; j++)
		{
			Rotation += FRotator(0.0f, j * ScatterH - (0.5f * ScatterV * ShotsPerRow), 0.0f);
			AActor * MuhShot = MuhWorld->SpawnActor<AActor>(Projectile, Location, Rotation);
			Rotation -= FRotator(0.0f, j * ScatterH - (0.5f * ScatterV * ShotsPerRow), 0.0f);
		}
		Rotation -= FRotator(i * ScatterV - (0.5f * ScatterH * ShotsPerColumn), 0.0f, 0.0f);
	}

}