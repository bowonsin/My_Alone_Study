#pragma once
#include "Potion.h"

class PotionStock // 포션 잔고 관리
{
private:
	map<string, int> potionStock_;
	
public:

	static constexpr int MAX_STOCK  = 10;

	void PotionInitialize(const string & potionName ) // 이름포션 호출
	{
		auto it = potionStock_.find(potionName);
		if (it == potionStock_.end())
			potionStock_[potionName] = MAX_STOCK;
		else
			cout << " 이미 존제하는 포션 입니다 . " << endl;

	}

	void GetPotionList()
	{
		for (const auto& A : potionStock_)
			cout << " 이름 : " << A.first << " // 잔량 : " << A.second << endl;
	}
	
};

