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

    cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄였음." << endl;
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
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
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
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
}


void Slime::Info()
{
    cout << "이름: " << _name << endl;
    cout << "생명력: " << _health << endl;
    cout << "방어력: " << _defense << endl;
    cout << "공격력: " << _attack << endl;
    cout << "물리공격저항력" << _physicialRegist << endl;
}