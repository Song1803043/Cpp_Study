#pragma once
#include "Monster.h"
#include <string>

class Ogre : public Monster {
public:
	Ogre(std::string name, int health, int attack, int defense);

};