#pragma once
#include <string>

class Slime;
class Troll;
class Goblin;
class Golem;

// ���������Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ����
// �߻�Ŭ������ �ڽ��� ��ü�� ������ �� �����ϴ�.
// ������ �ڽ��� �ڽ��� ���������Լ��� �ݵ�� �����ϵ��� �����ϴ�
// �ɷ��� ����ϴ�.
class Monster
{
protected:
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

	virtual void GetDamage(int attack) = 0; // ���� �����ռ�

	void Attack(Monster& enemy);
	void Attack(Slime& enemy);
	void Attack(Troll& enemy);
	void Attack(Goblin& enemy);



	void Info();
};

