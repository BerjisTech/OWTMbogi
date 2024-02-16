// Fill out your copyright notice in the Description page of Project Settings.

#include "mapLocator.h"

// Sets default values
AmapLocator::AmapLocator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = BoxCollision;
}

// Called when the game starts or when spawned
void AmapLocator::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AmapLocator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
