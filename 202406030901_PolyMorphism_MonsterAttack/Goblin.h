#pragma once
#include "Monster.h"

class Goblin : public Monster
{
private:
	int _physicalAttackRegist;

public:
	Goblin(std::string name, int health, int attack, int defense, int physicalAttackRegist);

	int GetPhysicalAttackRegist();

	void GetDamage(int attack) override;

	void Info();
};

