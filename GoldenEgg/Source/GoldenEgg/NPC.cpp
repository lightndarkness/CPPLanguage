// Fill out your copyright notice in the Description page of Project Settings.

#include "GoldenEgg.h"
#include "NPC.h"
#include "Avatar.h"
#include "MyHUD.h"


// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ProxSphere"));
	ProxSphere->AttachTo(RootComponent);
	ProxSphere->SetSphereRadius(50.f);
	// Code to make ANPC::Prox() run when this proximity sphere
	// overlaps another actor.
	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &ANPC::Prox);
	NpcMessage = "Hi, I'm Owen!";
}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPC::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void ANPC::Prox_Implementation(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// if the overlapped actor is not the player,
	// you should just simply return from the function
	if (Cast<AAvatar>(OtherActor) == nullptr)
	{
		return;
	}

	APlayerController* PController = GetWorld()->GetFirstPlayerController();
	if (PController)
	{
		AMyHUD* hud = Cast<AMyHUD>(PController->GetHUD());
		hud->AddMessage(Message(Name + FString (": ") + NpcMessage, 5.f, FColor::White, CharacterImage));
	}
}
