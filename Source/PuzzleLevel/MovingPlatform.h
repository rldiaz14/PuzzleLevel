// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLELEVEL_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()
	
  public:
	  AMovingPlatform();
	  virtual void BeginPlay() override;

	  virtual void Tick(float DeltaTime) override;

	  //adding a variable for speed
	  UPROPERTY(EditAnywhere)
		  float Speed = 20;

};

