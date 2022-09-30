// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/BoxComponent.h"
#include "BasicPawn.h"

// Sets default values
ABasicPawn::ABasicPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	_box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	_box->SetBoxExtent(FVector(32.0f));

	RootComponent = _box;
}

// Called when the game starts or when spawned
void ABasicPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABasicPawn::NotifyActorBeginOverlap(AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, "YEAH!");
}