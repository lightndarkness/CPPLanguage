// Progetto Battery Collerctor dal canale Unreal Engine di YouTube.

#pragma once

#include "PickUp.h"
#include "BatteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickUp : public APickUp
{
	GENERATED_BODY()
	
public:
	/** Sets default values for this actor's properties */
	ABatteryPickUp();

	/** Override the WasCollected function - use Implementation because it's a Blueprint Native Event */
	void WasCollected_Implementation() override;

	/**Publiv way to access the battery's power level */
	float GetPower() const;

protected:
	/**Set the amount of power the battery gives to character */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", meta = (BlueprintProtected = true))
	float BatterPower;
};
