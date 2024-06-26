#include "Dragon.h"
#include <iostream>

using namespace std;

Dragon::Dragon(std::string name, int health, int attack, int defense)
	: Monster(name, health, attack, defense) {}

void Dragon::GetDamage(int attack)
{
	cout << "Dragon::GetDamage" << endl;

	int damage = attack - GetDefense();

	if (damage <= 0)
	{
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}