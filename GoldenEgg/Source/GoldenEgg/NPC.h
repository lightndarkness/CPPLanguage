// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "NPC.generated.h"

UCLASS()
class GOLDENEGG_API ANPC : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	class USphereComponent* ProxSphere;

	/** This is the NPC's message that he has to tell us. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcMessage")
	FString NpcMessage;
	/** When you create a blueprint from this class, you want to be
		able to edit that message in blueprints,
		that's why we have the EditAnywhere and BlueprintReadWrite
		properties.
	*/

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC")
	UTexture2D* CharacterImage;

	// Sets default values for this character's properties
	ANPC();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UFUNCTION(BlueprintNativeEvent, Category = "Collision")
	void Prox(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	void Prox_Implementation(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
