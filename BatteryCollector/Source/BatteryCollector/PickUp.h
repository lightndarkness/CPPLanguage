/** Fill out your copyright notice in the Description page of Project Settings. */

#pragma once

#include "GameFramework/Actor.h"
#include "PickUp.generated.h" /** Must be the last thing in the headers list */

UCLASS()
class BATTERYCOLLECTOR_API APickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	/** Sets default values for this actor's properties */
	APickUp();

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Return the mesh for the pickup */
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickUpMesh; }

	/** Return whether or not the pickup is active */
	UFUNCTION(BlueprintPure, Category = "PickUp")
	bool IsActive();

	/** Allows other classes to safly change whether or not the pickup is active */
	UFUNCTION(BlueprintCallable, Category = "PickUp")
	void SetActive(bool NewPickUpState);

protected:
	/** True when the pickup can be used, and false when the pickup is deactivated */
	bool bISActive;

private:
	/** Static Mesh to rapresent the pickup in the level */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PickUp", meta = (AllowPrivateAccess = true))
	class UStaticMeshComponent* PickUpMesh;
	
};
