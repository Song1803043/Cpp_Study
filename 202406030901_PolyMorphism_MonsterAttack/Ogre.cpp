#include "Ogre.h"
#include <iostream>

using namespace std;

Ogre::Ogre(string name, int health, int attack, int defense)
	: Monster(name, health, attack, defense) {}

void Ogre::GetDamage(int attack)
{
	cout << "Ogre::GetDamage" << endl;

	int damage = attack - GetDefense();

	if (damage <= 0)
	{
		damage = 0;
	}

	SetHealth(GetHealth() - damage);
}
