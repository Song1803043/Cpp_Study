#include "Troll.h"
#include <iostream>

using namespace std;

Troll::Troll(std::string name, int health, int attack, int defense, int poisonRegist)
	: Monster(name, health, attack, defense), _poisonRegist(poisonRegist) {}


void Troll::GetDamage(int attack)
{
	cout << "Troll::GetDamage" << endl;
	int damage = attack - _defense - _poisonRegist;

	if (damage <= 0)
	{
		damage = 0;
	}

	_health -= damage;
}

int Troll::GetPoisonRegist()
{
	return _poisonRegist;
}

void Troll::Info()
{
	Monster::Info();
	cout << "독 공격 저항력: " << _poisonRegist << endl;
}
