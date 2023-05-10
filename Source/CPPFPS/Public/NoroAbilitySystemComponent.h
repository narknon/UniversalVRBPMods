/*
// Copyright Trepang Studios 2016-2021

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTaskOwnerInterface.h"
#include "NoroAbilitySystemComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CPPFPS_API UNoroAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	/#1#/ Sets default values for this component's properties
	UNoroAbilitySystemComponent();#1#

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
*/
