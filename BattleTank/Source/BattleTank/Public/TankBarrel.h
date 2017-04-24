// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), HideCategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
	
public:
	void Elevate(float DegreePerSecond);
	
private:
	UPROPERTY(EditAnywhere)
	float MaxDegreesPerSecond = 20.f;

	UPROPERTY(EditAnywhere)
	float MaxElevationDegrees = 40.f;

	UPROPERTY(EditAnywhere)
	float MinElevationDegrees = 0.f;
};
