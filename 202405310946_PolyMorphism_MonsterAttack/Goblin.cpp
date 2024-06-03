#include "Goblin.h"
#include <iostream>

using namespace std;

Goblin::Goblin(std::string name, int health, int attack, int defense, int physicalAttackRegist)
	: Monster(name, health, attack, defense), _physicalAttackRegist(physicalAttackRegist) {}


int Goblin::GetPhysicalAttackRegist()
{
	return _physicalAttackRegist;
}

void Goblin::Info()
{
	Monster::Info();
	cout << "물리공격저항력: " << _physicalAttackRegist << endl;
}
