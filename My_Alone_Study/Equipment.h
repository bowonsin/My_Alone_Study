#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Equipment
{
protected:
	string Name_;
	bool AbCheck_;
	int AbPower_;

public:
	Equipment(const string& name) : Name_(name), AbCheck_(true),AbPower_(0) {}
	~Equipment() {}

	virtual void Ability_Active() = 0;

};