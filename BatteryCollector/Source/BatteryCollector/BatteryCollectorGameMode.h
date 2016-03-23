// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "BatteryCollectorGameMode.generated.h"

/** enum to store the current state of gameplay */
UENUM(BlueprintType)
enum class EBatteryPlayState
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatteryCollectorGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABatteryCollectorGameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	/** Returns the power needed to win - for the HUD */
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	/** Returns the current play state */
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentPlayState() const;

	/** Sets a new play state */
	void SetCurrentPlayState(EBatteryPlayState NewPlayState);

protected:
	/**The rate at which the character loses power */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power")
	float DecayRate;

	/** The power needed to win the game */
	UPROPERTY(EditdefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = true))
	float PowerToWin;

	/** The widget class to use for our hud screen */
	UPROPERTY(EditdefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = true))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	/** The instance of the HUD */
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:
	/** Keeps track of the current state */
	EBatteryPlayState CurrentPlayState;

	TArray<class ASpawnVolume*> SpawnVolumeActors;

	/** This will handle any function calls that rely upon changing the playing state of our game */
	void HandleNewState(EBatteryPlayState NewPlayState);
};
