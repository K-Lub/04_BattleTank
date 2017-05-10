// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "Tank.h"
#include "TankAIController.h"

ATankAIController::ATankAIController()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());

	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank && ControlledTank) {
		//TODO move towards the player
		//aim towards the player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		//fire if ready

		ControlledTank->Fire();
	}
}



