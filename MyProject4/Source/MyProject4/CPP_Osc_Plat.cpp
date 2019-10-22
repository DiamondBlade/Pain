// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Osc_Plat.h"

// Sets default values
ACPP_Osc_Plat::ACPP_Osc_Plat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	UE_LOG(LogTemp, Warning, TEXT("Osc Plat Lives"));
}

// Called when the game starts or when spawned
void ACPP_Osc_Plat::BeginPlay()
{
	Super::BeginPlay();
	NextPosition = GetActorLocation();
}

// Called every frame
void ACPP_Osc_Plat::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	OscOffset = (FMath::Sin(OpTime + DeltaTime) - (FMath::Sin(OpTime)));
	NextPosition.Z += OscOffset * Amplitude;
	OpTime += DeltaTime;
	SetActorLocation(NextPosition);
}

