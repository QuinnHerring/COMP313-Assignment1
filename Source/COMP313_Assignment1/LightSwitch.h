// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitch.generated.h"


UCLASS(Blueprintable)
class COMP313_ASSIGNMENT1_API ALightSwitch : public AActor
{
    GENERATED_BODY()
public:
    /** point light component */
    UPROPERTY(VisibleAnywhere)
    class UPointLightComponent* PointLight1;
    
    ALightSwitch();
    
    /** Toggles the light component's visibility*/
    UFUNCTION(BlueprintCallable)
    void ToggleLight();
    
    /** the desired intensity for the light */
    UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
    float DesiredIntensity;
};
