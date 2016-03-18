// Progetto Battery Collerctor dal canale Unreal Engine di YouTube.

#include "BatteryCollector.h"
#include "BatteryPickUp.h"

// Sets default values for this actor's properties
ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);
}

