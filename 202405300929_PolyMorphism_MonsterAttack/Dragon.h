#pragma once
#include <string>

class Ogre;
class Slime;
class Troll;

class Dragon
{
	std::string _name;
	int _health;
	int _attack;
	int _defense;

public:
	Dragon(std::string name, int health, int attack, int defense);



	int GetHealth();
	void SetHealth(int health);

	int GetDefense();
	std::string GetName();

	void Attack(Dragon& enemy);
	void Attack(Ogre& enemy);
	void Attack(Slime& enemy);
	void Attack(Troll& enemy);

	void Info();
};