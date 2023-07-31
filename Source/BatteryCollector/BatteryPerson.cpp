// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPerson.h"

// Sets default values
ABatteryPerson::ABatteryPerson()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatteryPerson::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABatteryPerson::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABatteryPerson::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

