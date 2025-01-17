// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Shield.h"
#include "MeleeWeapon.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class UNREALPROJECT_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Currency)
		int32 MoneyAmount{ 0 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		float MaxHealth{ 5.0f };
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		float MaxMana{ 5.0f };
	float Mana;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Status)
		float MaxStamina{ 5.0f };
	float Stamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Upgrade)
		int32 ScarabAmount{ 0 };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Upgrade)
		bool ScarabCollected{ false };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Currency)
		bool MoneyCollected{ false };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attacking)
		UClass* BPWeapon{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Attacking)
		UClass* BPShield{ nullptr };


	AShield* Shield{ nullptr };
	AMeleeWeapon* Weapon{ nullptr };

	UFUNCTION(BlueprintCallable)
		void AddToMoney(int32 amount);
	UFUNCTION(BlueprintCallable)
		bool RemoveFromMoney(int32 amount);
	UFUNCTION(BlueprintCallable)
		void AddToScarab(int32 amount);
	UFUNCTION(BlueprintCallable)
		bool RemoveFromScarab(int32 amount);
	UFUNCTION(BlueprintCallable)
		void UpdateHealthAmount(float amount);
	UFUNCTION(BlueprintCallable)
		void UpdateManaAmount(float amount);
	UFUNCTION(BlueprintCallable)
		void UpdateStaminaAmount(float amount);
	UFUNCTION(BlueprintCallable)
		float GetHealth();
	UFUNCTION(BlueprintCallable)
		float GetMana();
	UFUNCTION(BlueprintCallable)
		float GetStamina();
	UFUNCTION(BlueprintCallable)
		void ResetHealth(float newHealth) { Health = newHealth; }
	UFUNCTION(BlueprintCallable)
		void ResetStamina(float newStamina) { Stamina = newStamina; }
	UFUNCTION(BlueprintCallable)
		void ResetMana(float newMana) { Mana = newMana; }
	

	void TestDead(float percentAmountLost);

	virtual void PostInitializeComponents() override;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
