// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ITimerObserver.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UITimerObserver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PROYECTO_DONKEY_API IITimerObserver
{
	GENERATED_BODY()

public:
	virtual void OnTimerReachedZero() = 0;  // Método para recibir la notificación

};
