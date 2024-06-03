#include "Troll.h"
#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include <iostream>


using namespace std;

Troll::Troll(std::string name, int health, int attack, int defense, int addDamage)
    : _name(name), _health(health), _attack(attack), _defense(defense), _addDamage(addDamage) {}

int Troll::GetHealth()
{
    return _health;
}

void Troll::SetHealth(int health)
{
    _health = health;
}

int Troll::GetDefense()
{
    return _defense;
}

int Troll::AddDamage()
{
    return _addDamage;
}


std::string Troll::GetName()
{
    return _name;
}


void Troll::Attack(Troll& enemy)
{
    enemy._health -= (_attack + _addDamage) - enemy._defense;
    cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �ٿ���." << endl;
}

void Troll::Attack(Dragon& enemy)
{
    int damage = (_attack + _addDamage) - enemy.GetDefense();

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �ٿ���." << endl;
}

void Troll::Attack(Ogre& enemy)
{
    int damage = (_attack + _addDamage) - enemy.GetDefense();

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �ٿ���." << endl;
}

void Troll::Attack(Slime& enemy)
{
    int damage = (_attack + _addDamage) - (enemy.GetDefense() - enemy.GetPhysicalRegist());

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �ٿ���." << endl;

}

void Troll::Info()
{
    cout << "�̸�: " << _name << endl;
    cout << "�����: " << _health << endl;
    cout << "����: " << _defense << endl;
    cout << "���ݷ�: " << _attack << endl;
    cout << "�߰�������: " << _addDamage << endl;
}