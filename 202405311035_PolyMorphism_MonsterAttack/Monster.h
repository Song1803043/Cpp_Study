#pragma once
#include <string>

class Slime;
class Troll;
class Goblin;

class Monster
{
private:
	std::string _name;
	int _health;	// �����
	int _attack;	// ���ݷ�
	int _defense;	// ����

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

