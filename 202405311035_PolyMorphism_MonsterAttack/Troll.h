#pragma once
#include "Monster.h"
#include <string>

class Troll : public Monster
{
private:
	int _addDamage;	// 물리 공격 저항력

public:
	Troll(std::string name, int health, int attack, int defense, int addDamage);


	void GetDamage(int attack);

	void Info();

};

