#pragma once
#include "Equipment.h"

class Weapon : public Equipment
{
protected:
	float Damage_;
	float UpDamage_;
	
public:
	Weapon(const string& name ,const float& Damage):Damage_(Damage), UpDamage_(0),Equipment(name){}
	~Weapon() {}

	
	virtual void Ability_Active() override = 0;
	virtual float GetDamage() = 0;
};