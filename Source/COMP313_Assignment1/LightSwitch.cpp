// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitch.h"
#include "Components/PointLightComponent.h"
#include "Components/SceneComponent.h"

ALightSwitch::ALightSwitch()
{
    DesiredIntensity = 50000.0f;

    PointLight1 = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight1"));
    PointLight1->Intensity = DesiredIntensity;
    PointLight1->SetVisibility(false, false);
    RootComponent = PointLight1;
}

void ALightSwitch::ToggleLight()
{
    PointLight1->ToggleVisibility();
}

