// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "mapLocator.h"
#include "StartPathFinder.generated.h"

USTRUCT()
struct FGraphNode
{
    GENERATED_BODY()

    AmapLocator* Node;
    float Cost;         
    FGraphNode* Parent; 

    TArray<FGraphNode*> Connections;
};

UCLASS()
class OPENWORLDTEMPLATE_API AStartPathFinder : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStartPathFinder();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<FGraphNode *> FindPath(FGraphNode *StartNode, FGraphNode *EndNode);

private:
	TArray<FGraphNode *> BuildPath(FGraphNode *EndNode);
	TArray<FGraphNode *> Nodes;
	float Heuristic(FGraphNode *Node, FGraphNode *EndNode);
};