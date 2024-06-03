#pragma once
#include "Monster.h"
#include <string>

class Dragon : public Monster {
public:
	Dragon(std::string name, int health, int attack, int defense);

};