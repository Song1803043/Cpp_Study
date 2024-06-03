#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime(std::string name, int health, int attack, int defense, int physicalRegist)
	: Monster(name, health, attack, defense), _physicalRegist(physicalRegist) {}


int Slime::GetPhysicalRegist() {
	return _physicalRegist;
}

void Slime::GetDamage(int attack)
{
	cout << "Slime::GetDamage" << endl;
	int damage = attack - GetDefense() - _physicalRegist;

	if (damage <= 0)
	{
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Slime::Info() {
	Monster::Info();
	cout << "물리공격저항력: " << _physicalRegist << endl;
}
