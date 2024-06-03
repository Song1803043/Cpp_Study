#include "Monster.h"
#include "Slime.h"
#include "Troll.h"
#include "Goblin.h"
#include <iostream>

using namespace std;

Monster::Monster(string name, int health, int attack, int defense)
	: _name(name), _health(health), _attack(attack), _defense(defense) {}

string Monster::GetName() {
	return _name;
}

int Monster::GetHealth() {
	return _health;
}

void Monster::SetHealth(int health) {
	_health = health;
}

int Monster::GetDefense() {
	return _defense;
}

void Monster::Attack(Monster& enemy) {
	int damage = _attack - enemy._defense;

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy._health - damage;

	enemy._health = health;

	cout << "Monster::Attack(Monster)" << endl;
	cout << _name << "�� " << enemy._name << "�� �����ؼ� �������� " << enemy._health << "�� ����." << endl;
}

void Monster::Attack(Slime& enemy)
{
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << "Monster::Attack(Slime)" << endl;
	cout << GetName() << "�� " << enemy.GetName() << "�� �����ؼ� �������� " << enemy.GetHealth() << "�� ����." << endl;
}

void Monster::Attack(Troll& enemy)
{
	int damage = _attack + enemy.AddDamage() - enemy._defense;

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << "Monster::Attack(Troll)" << endl;
	cout << GetName() << "�� " << enemy.GetName() << "�� �����ؼ� �������� " << enemy.GetHealth() << "�� ����." << endl;
}

void Monster::Attack(Goblin& enemy)
{
	int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalAttackRegist();

	if (damage <= 0) {
		damage = 0;
	}

	int health = enemy.GetHealth() - damage;

	enemy.SetHealth(health);

	cout << "Monster::Attack(Goblin)" << endl;
	cout << GetName() << "�� " << enemy.GetName() << "�� �����ؼ� �������� " << enemy.GetHealth() << "�� ����." << endl;
}


void Monster::Info() {
	cout << "�̸�: " << _name << endl;
	cout << "������: " << _health << endl;
	cout << "����: " << _defense << endl;
	cout << "���ݷ�: " << _attack << endl;
}