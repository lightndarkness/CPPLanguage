// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Avatar.generated.h"

UCLASS()
class GOLDENEGG_API AAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float Hp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float MaxHp;

	// Sets default values for this character's properties
	AAvatar();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	/** Move the character in the forward direction */
	void MoveForward(float amount);

	/** Move the character in the right direction */
	void MoveRight(float amount);

	/** Move the camera around the character */
	void Yaw(float amount);

	/** Move the camera in the X axis */
	void Pitch(float amount);
	
};
