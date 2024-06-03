#pragma once
#include "Monster.h"

class Golem : public Monster
{
private:
	int _fireAttackRegist; // �Ұ������׷�

public:
	Golem(std::string name, int health, int attack, int defense, int fireAttackRegist);

	int GetFireAttackRegist();

	void GetDamage(int attack) override;

	void Info();
};

