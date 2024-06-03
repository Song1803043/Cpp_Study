#include "Troll.h"
#include <iostream>

using namespace std;

Troll::Troll(std::string name, int health, int attack, int defense, int addDamage)
	: Monster(name, health, attack, defense), _addDamage(addDamage) {}


void Troll::GetDamage(int attack)
{
	cout << "Troll::GetDamage" << endl;
	int damage = attack - GetDefense() - _addDamage;

	if (damage <= 0)
	{
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Troll::Info()
{
	Monster::Info();
	cout << "추가데미지: " << _addDamage << endl;
}
