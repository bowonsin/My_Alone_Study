#pragma once
#include "weapon.h"

class Sword :public Weapon
{
public:
	Sword(const string& name, const float& damage) :Weapon(name, damage) {}
	~Sword() {}


	
	void Ability_Active() override // 검의 특수 횩과 발동시 데미지 10퍼센트 증가
	{
		Equipment::AbCheck_ = true;
		Weapon::UpDamage_ = Weapon::Damage_ * 0.1f;
	}

	float GetDamage() override // 무기 공격력 return 해주고 효과 특성 on/off 되어 있는지 확인하고 return 
	{
		float Final_Dagae = Weapon::Damage_;
		if (Equipment::AbCheck_)
		{
			Equipment::AbCheck_ = false;
			Final_Dagae += Weapon::UpDamage_;
			Weapon::UpDamage_ = 0;
		}
		return Final_Dagae;
	}

};