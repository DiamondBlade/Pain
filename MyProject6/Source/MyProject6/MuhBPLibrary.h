// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MuhBPLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT6_API UMuhBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()



	UFUNCTION(BlueprintPure)
		static FString GetLoud(FString MuhWords);
	
	UFUNCTION(BlueprintPure)
		static FString GetQuiet(FString MuhWords);

	UFUNCTION(BlueprintCallable, Category = "Muh BP Utilities", meta = (WorldContext = "RefObj"))
		static void FlakShot(UObject* RefObj, TSubclassOf<AActor>Projectile, FVector Location, FRotator Rotation, int32 ShotsPerRow, int32 ShotsPerColumn, float ScatterH, float ScatterV);

	UPROPERTY(EditAnywhere)
		int32 ShotsPerRow = 1;

	UPROPERTY(EditAnywhere)
		int32 ShotsPerColumn = 1;

	UPROPERTY(EditAnywhere)
		float ScatterH = 0.0f;

	UPROPERTY(EditAnywhere)
		float ScatterV = 0.0f;
};
