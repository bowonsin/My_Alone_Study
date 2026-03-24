#pragma once
#include "Potion.h"

class Heal_Potion : public Potion // 회복 포션
{
public:
	float GetAbility()
	{
		return Ability_Power;
	}
};