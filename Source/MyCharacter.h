// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class ALLENTUTORIAL2_API AMyCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Constructor
    AMyCharacter();

protected:
    virtual void BeginPlay() override;

    // Movement functions
    void MoveForward(float Value);
    void MoveRight(float Value);

    // Camera setup
    UPROPERTY(VisibleAnywhere)
    class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere)
    class UCameraComponent* FollowCamera;

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
