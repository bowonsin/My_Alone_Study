#pragma once
#include "Equipment.h"

class Ammor : public Equipment
{
protected:
	float Shiled_;
	float UpShiled_;
public:
	Ammor(const string& name, const float& Shiled) :Shiled_(Shiled), UpShiled_(0), Equipment(name) {}
	~Ammor() {}

	void Ability_Active() override // 특수 능력 방어력 10퍼센트 증가
	{
		Equipment::AbCheck_ = true;
		UpShiled_ = Shiled_ * 0.1f;
	}

	float GetShiled()
	{
		float Shiled = Shiled_;
		if (Equipment::AbCheck_)
		{
			Shiled += UpShiled_;
			Equipment::AbCheck_ = false;
		}
		return Shiled;
	}
};