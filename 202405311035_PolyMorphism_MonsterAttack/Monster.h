#pragma once
#include <string>

class Slime;
class Troll;
class Goblin;

class Monster
{
private:
	std::string _name;
	int _health;	// 생명력
	int _attack;	// 공격력
	int _defense;	// 방어력

public:
	Monster(std::string name, int health, int attack, int defense);

	std::string GetName();

	int GetHealth();

	void SetHealth(int health);

	int GetDefense();

	void GetDamage(int attack);

	void Attack(Monster& enemy);
	void Attack(Slime& enemy);
	void Attack(Troll& enemy);
	void Attack(Goblin& enemy);



	void Info();
};

