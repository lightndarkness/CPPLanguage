// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryCollector.h"
#include "PickUp.h"


// Sets default values
APickUp::APickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// All the pickup start active
	bISActive = true;

	// Create the static mesh component
	PickUpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickUpMesh"));
	RootComponent = PickUpMesh;
}

// Called when the game starts or when spawned
void APickUp::BeginPlay()
{
	Super::BeginPlay();
	
}

// return active state
bool APickUp::IsActive()
{
	return bISActive;
}

// Changes active state
void APickUp::SetActive(bool NewPickUpState)
{
	bISActive = NewPickUpState;
}

void APickUp::WasCollected_Implementation()
{
	// Log a debug message
	FString PickUpDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickUpDebugString);
}