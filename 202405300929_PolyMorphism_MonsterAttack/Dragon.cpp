#include "Dragon.h"
#include "Ogre.h"
#include "Slime.h"
#include "Troll.h"
#include <iostream>

using namespace std;

Dragon::Dragon(string name, int health, int attack, int defense)
    : _name(name), _health(health), _attack(attack), _defense(defense) {}

string Dragon::GetName()
{
    return _name;
}

int Dragon::GetHealth()
{
    return _health;
}

int Dragon::GetDefense()
{
    return _defense;
}

void Dragon::SetHealth(int health)
{
    _health = health;
}

void Dragon::Attack(Dragon& enemy)
{
    enemy._health -= (_attack - enemy._defense);
    cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄였음." << endl;
}

void Dragon::Attack(Ogre& enemy)
{
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}

void Dragon::Attack(Slime& enemy)
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

void Dragon::Attack(Troll& enemy)
{
    int damage = _attack - enemy.GetDefense();

    if (damage <= 0)
    {
        damage = 0;
    }
    int health = enemy.GetHealth() - damage;

    enemy.SetHealth(health);
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}

void Dragon::Info()
{
    cout << "이름: " << _name << endl;
    cout << "생명력: " << _health << endl;
    cout << "방어력: " << _defense << endl;
    cout << "공격력: " << _attack << endl;
}