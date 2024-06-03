#pragma once
#include "Monster.h"
#include <string>

class Slime : public Monster
{
private:
	int _physicalRegist;	// 물리 공격 저항력

public:
	Slime(std::string name, int health, int attack, int defense, int physicalRegist);

	int GetPhysicalRegist();

	void GetDamage(int attack);

	void Info();

};

