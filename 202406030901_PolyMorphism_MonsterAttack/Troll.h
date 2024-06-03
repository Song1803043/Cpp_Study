#pragma once
#include "Monster.h"
#include <string>

class Troll : public Monster
{
private:
	int _poisonRegist;	// ���� ���� ���׷�

public:
	Troll(std::string name, int health, int attack, int defense, int addDamage);

	void GetDamage(int attack) override;

	int GetPoisonRegist();

	void Info();
};

