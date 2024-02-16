// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"

#include "mapLocator.generated.h"

UCLASS()
class OPENWORLDTEMPLATE_API AmapLocator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AmapLocator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, Category = "Pathfinding")
	class AStartPathFinder *PathFinder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location Details")
	FString LocationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location Details")
	FString LocationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location Details")
	FString LocationCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location Details")
	TArray<AmapLocator *> Neighbors;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Collision")
	UBoxComponent *BoxCollision;
};
