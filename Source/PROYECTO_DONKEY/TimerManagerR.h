// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ITimerObserver.h"
#include "TimerManagerR.generated.h"

UCLASS()
class PROYECTO_DONKEY_API ATimerManagerR : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimerManagerR();

protected:
	virtual void Tick(float DeltaTime);
private:
	float TiempoRestante;
	void ResetCronometro();

	IITimerObserver* Observador;

public:
	void SetObservador(IITimerObserver* NuevoObservador);  // Método para registrar el observador

};
