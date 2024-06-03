#include "Golem.h"
#include <iostream>

using namespace std;

Golem::Golem(string name, int health, int attack, int defense, int fireAttackRegist)
	: Monster(name, health, attack, defense), _fireAttackRegist(fireAttackRegist) {}

int Golem::GetFireAttackRegist()
{
	return _fireAttackRegist;
}

void Golem::GetDamage(int attack)
{
	cout << "Golem::GetDamage" << endl;

	int damage = attack - GetDefense() - _fireAttackRegist;

	if (damage <= 0)
	{
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}

void Golem::Info()
{
	Monster::Info();
	cout << "화염공격저항력: " << _fireAttackRegist << endl;
}