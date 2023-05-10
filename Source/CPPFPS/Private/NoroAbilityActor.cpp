// Copyright Trepang Studios 2016-2021


#include "CPPFPS/Public/NoroAbilityActor.h"



// Sets default values
ANoroAbilityActor::ANoroAbilityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	
}

// Called when the game starts or when spawned
void ANoroAbilityActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("UMyAbilitySystemComponent::BeginPlay"))
	if (AbilitySystemComponent->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Warning, TEXT("AbilitySystemComponent is valid"))
	}
}

// Called every frame
void ANoroAbilityActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UAbilitySystemComponent* ANoroAbilityActor::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}