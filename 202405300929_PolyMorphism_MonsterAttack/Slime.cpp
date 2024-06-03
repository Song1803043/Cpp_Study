#include "Slime.h"
#include "Dragon.h"
#include "Ogre.h"
#include "Troll.h"
#include <iostream>

using namespace std;

Slime::Slime(std::string name, int health, int attack, int defense, int physicalResgist)
    : _name(name), _health(health), _attack(attack), _defense(defense), _physicialRegist(physicalResgist) {}

int Slime::GetHealth()
{
    return _health;
}
void Slime::SetHealth(int health)
{
    _health = health;
}

int Slime::GetDefense()
{
    return _defense;
}

int Slime::GetPhysicalRegist()
{
    return _physicialRegist;
}

std::string Slime::GetName()
{
    return _name;
}

void Slime::Attack(Slime& enemy)
{
    int damage = _attack - enemy._defense - enemy._physicialRegist;

    if (damage <= 0)
    {
        damage = 0;
    }

    int health = enemy._health - damage;

    enemy._health = health;

    cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �ٿ���." << endl;
}

void Slime::Attack(Ogre& enemy)
{
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0)
    {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �ٿ���." << endl;
}

void Slime::Attack(Dragon& enemy)
{
    int damage = (_attack - enemy.GetDefense());

    if (damage <= 0)
    {
        damage = 0;
    }

    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "�� " << enemy.GetName() << "�� �����ؼ� ������� " << enemy.GetHealth() << "�� �ٿ���." << endl;
}


void Slime::Info()
{
    cout << "�̸�: " << _name << endl;
    cout << "�����: " << _health << endl;
    cout << "����: " << _defense << endl;
    cout << "���ݷ�: " << _attack << endl;
    cout << "�����������׷�" << _physicialRegist << endl;
}