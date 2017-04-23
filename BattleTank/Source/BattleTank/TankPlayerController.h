// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Public/Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = .5;
	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = .3333;

	float LineTraceRange = 1000000.f;

	ATank* GetControlledTank() const;

	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	
	//Start the tank moving the barrel so that a shot would hit where the
	//crosshair intersects the world
	void AimTowardsCrosshair();

	//return an OUT parameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
	
};
