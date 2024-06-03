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
    cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄였음." << endl;
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
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
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
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;
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
    cout << _name << "가 " << enemy.GetName() << "을 공격해서 생명력이 " << enemy.GetHealth() << "로 줄였음." << endl;

}

void Troll::Info()
{
    cout << "이름: " << _name << endl;
    cout << "생명력: " << _health << endl;
    cout << "방어력: " << _defense << endl;
    cout << "공격력: " << _attack << endl;
    cout << "추가데미지: " << _addDamage << endl;
}