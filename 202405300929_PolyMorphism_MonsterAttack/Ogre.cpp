#include "Ogre.h"
#include "Dragon.h"
#include "Slime.h"
#include "Troll.h"
#include <iostream>

using namespace std;

Ogre::Ogre(string name, int health, int attack, int defense)
    : _name(name), _health(health), _attack(attack), _defense(defense) {}

string Ogre::GetName()
{
    return _name;
}

int Ogre::GetHealth()
{
    return _health;
}

void Ogre::SetHealth(int health)
{
    _health = health;
}

int Ogre::GetDefense()
{
    return _defense;
}


void Ogre::Attack(Ogre& enemy)
{
    enemy._health -= (_attack - enemy._defense);
    cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄였음." << endl;
}

void Ogre::Attack(Dragon& enemy)
{
    int damage = (_attack - enemy.GetDefense());

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}

void Ogre::Attack(Slime& enemy)
{
    int damage = _attack - enemy.GetDefense() - enemy.GetPhysicalRegist();

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}

void Ogre::Attack(Troll& enemy)
{
    int damage = (_attack - enemy.GetDefense());

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}

void Ogre::Info()
{
    cout << "이름: " << _name << endl;
    cout << "생명력: " << _health << endl;
    cout << "방어력: " << _defense << endl;
    cout << "공격력: " << _attack << endl;
}