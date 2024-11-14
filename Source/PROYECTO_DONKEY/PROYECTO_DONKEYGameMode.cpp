// Copyright Epic Games, Inc. All Rights Reserved.

#include "PROYECTO_DONKEYGameMode.h"
#include "TimerManagerR.h"
#include "TimerHUD.h"
#include "PROYECTO_DONKEYCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"

APROYECTO_DONKEYGameMode::APROYECTO_DONKEYGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	HUDClass = ATimerHUD::StaticClass();
}

void APROYECTO_DONKEYGameMode::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->SpawnActor<ATimerManagerR>();
	// Instanciar el TimerManager
	ATimerManagerR* Timer = GetWorld()->SpawnActor<ATimerManagerR>();

	// Obtener el personaje y registrarlo como observador
	APROYECTO_DONKEYCharacter* Character = Cast<APROYECTO_DONKEYCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character && Timer)
	{
		// Establecer la posición objetivo para el personaje (por ejemplo, a (0, 0, 0))
		Character->SetPositionObjetivo(FVector(1208.0f,-517.0f, 205.0f));

		// Registrar el personaje como observador
		Timer->SetObservador(Character);
	}
}
