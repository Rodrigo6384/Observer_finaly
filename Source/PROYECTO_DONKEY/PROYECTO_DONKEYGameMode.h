// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PROYECTO_DONKEYGameMode.generated.h"

UCLASS(minimalapi)
class APROYECTO_DONKEYGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APROYECTO_DONKEYGameMode();
protected:
	virtual void BeginPlay() override;
};



