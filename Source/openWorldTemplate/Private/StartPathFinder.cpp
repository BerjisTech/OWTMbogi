// Fill out your copyright notice in the Description page of Project Settings.

#include "StartPathFinder.h"
#include "mapLocator.h"
#include "EngineUtils.h"

// Sets default values
AStartPathFinder::AStartPathFinder()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AStartPathFinder::BeginPlay()
{
	Super::BeginPlay();

	// Populate the graph with AmapLocator nodes
	// This is just a placeholder, you'll need to implement this yourself
	for (TActorIterator<AmapLocator> It(GetWorld(), AmapLocator::StaticClass()); It; ++It)
	{
		AmapLocator *MapLocator = *It;
		FGraphNode *GraphNode = new FGraphNode();
		GraphNode->Node = MapLocator;
		// Add GraphNode to your graph
		Nodes.Add(GraphNode);
	}
}

// Called every frame
void AStartPathFinder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

TArray<FGraphNode *> AStartPathFinder::FindPath(FGraphNode *StartNode, FGraphNode *EndNode)
{
	// This is a very basic implementation of the A* algorithm
	// You'll need to implement the heuristic function and handle edge cases

	TQueue<FGraphNode *, EQueueMode::Spsc> OpenSet;
	TSet<FGraphNode *> ClosedSet;

	OpenSet.Enqueue(StartNode);

	while (!OpenSet.IsEmpty())
	{
		FGraphNode *CurrentNode = nullptr;
		OpenSet.Dequeue(CurrentNode);

		if (CurrentNode == EndNode)
		{
			// We've found the end node!
			return BuildPath(CurrentNode);
		}

		ClosedSet.Add(CurrentNode);

		TArray<FGraphNode *> OpenSetArray;
		OpenSetArray.Empty();

		for (FGraphNode *ArrayNode : CurrentNode->Connections)
		{
			if (ClosedSet.Contains(ArrayNode))
			{
				continue;
			}

			float Cost = CurrentNode->Cost + Heuristic(ArrayNode, EndNode);

			if (!OpenSetArray.ContainsByPredicate([&](const FGraphNode *Item)
												  { return Item == ArrayNode; }) ||
				Cost < ArrayNode->Cost)
			{
				ArrayNode->Cost = Cost;
				ArrayNode->Parent = CurrentNode;

				if (!OpenSetArray.ContainsByPredicate([&](const FGraphNode *Item)
													  { return Item == ArrayNode; }))
				{
					OpenSetArray.Add(ArrayNode);
				}
			}
		}

		for (FGraphNode *Node : OpenSetArray)
		{
			OpenSet.Enqueue(Node);
		}
	}

	// No path was found
	return TArray<FGraphNode *>();
}

TArray<FGraphNode *> AStartPathFinder::BuildPath(FGraphNode *EndNode)
{
	// This is a placeholder, you'll need to implement this yourself
	return TArray<FGraphNode *>();
}

float AStartPathFinder::Heuristic(FGraphNode *Node, FGraphNode *EndNode)
{
	// This is a placeholder, you'll need to implement this yourself
	return 0.0f;
}