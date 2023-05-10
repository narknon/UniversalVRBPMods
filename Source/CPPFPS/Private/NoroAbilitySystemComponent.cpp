/*// Copyright Trepang Studios 2016-2021


#include "NoroAbilitySystemComponent.h"


/#1#/ Sets default values for this component's properties
UNoroAbilitySystemComponent::UNoroAbilitySystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}#1#


// Called when the game starts
void UNoroAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UNoroAbilitySystemComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}*/

