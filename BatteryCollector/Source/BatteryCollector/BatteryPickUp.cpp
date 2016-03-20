// Progetto Battery Collerctor dal canale Unreal Engine di YouTube.

#include "BatteryCollector.h"
#include "BatteryPickUp.h"

// Sets default values for this actor's properties
ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);

	// the base power level of the battery
	BatterPower = 150.f;
}

void ABatteryPickUp::WasCollected_Implementation()
{
	// Base PickUp behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

// reports the power level of the battery
float ABatteryPickUp::GetPower() const
{
	return BatterPower;
}