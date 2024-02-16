// Fill out your copyright notice in the Description page of Project Settings.

#include "AIDriver.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "WheeledVehiclePawn.h"
#include "UObject/ObjectMacros.h"

// Sets default values for this component's properties
UAIDriver::UAIDriver()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UAIDriver::BeginPlay()
{
	Super::BeginPlay();

	// Call throttle function
	addThrottle(0.5);
}

// Called every frame
void UAIDriver::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

// Function addThrottle that get owner of this component, checks if the owner is a wheeled vehihicle pawn, if yes, it adds throttle to vehicle movement component every .0002 seconds
void UAIDriver::addThrottle(float throttle)
{
	// Get owner of this component
	AActor *owner = GetOwner();

	// Check if owner is a wheeled vehicle pawn
	if (owner->IsA(AWheeledVehiclePawn::StaticClass()))
	{
		// Cast owner to wheeled vehicle pawn
		AWheeledVehiclePawn *wheeledVehiclePawn = Cast<AWheeledVehiclePawn>(owner);

		// Add throttle to vehicle movement component every .0002 seconds
		wheeledVehiclePawn->GetVehicleMovementComponent()->SetThrottleInput(throttle);
	}

	// delay for .0002 seconds the all function again
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, &UAIDriver::addThrottle, .0002f, false);
}
