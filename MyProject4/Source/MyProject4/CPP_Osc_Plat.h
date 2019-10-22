// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPP_Osc_Plat.generated.h"

UCLASS()
class MYPROJECT4_API ACPP_Osc_Plat : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Osc_Plat();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float OpTime;
	float OscOffset;
	FVector NextPosition; 
	
UPROPERTY(EditAnywhere)
	float Amplitude = 100.0f;
};
