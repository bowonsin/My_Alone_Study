#pragma once

#include "Equipment.h"

class Potion
{
protected:
	string potion_name_; // 포션 이름
	float Ability_Power; // 포션 어빌리티 효과치
	
public:
	Potion(const string& name ,const float & Power) : Ability_Power(0), potion_name_(name)
	{
		Ability_Power = Power;
	}
	~Potion() {}
	string Getname() { return potion_name_; }
	virtual float GetAbility() = 0;
};