// Fill out your copyright notice in the Description page of Project Settings.


#include "UMadAttributeSet.h"
#include "Net/UnrealNetwork.h"

UUMadAttributeSet::UUMadAttributeSet()
{
}

void UUMadAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UUMadAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUMadAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUMadAttributeSet, AttackPower, COND_None, REPNOTIFY_Always);
}

void UUMadAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUMadAttributeSet, Health, OldHealth);
}

void UUMadAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUMadAttributeSet, Stamina, OldStamina);
}

void UUMadAttributeSet::OnRep_AttackPower(const FGameplayAttributeData& OldAttackPower)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UUMadAttributeSet, AttackPower, OldAttackPower);
}
