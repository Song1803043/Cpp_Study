#include <iostream>
#include <string>

using namespace std;

class Dragon
{
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    Dragon(string name, int health, int attack, int defense)
        : _name(name), _health(health), _attack(attack), _defense(defense) {}

    string GetName()
    {
        return _name;
    }

    int GetHealth()
    {
        return _health;
    }

    int GetDefense()
    {
        return _defense;
    }

    void SetHealth(int health)
    {
        _health = health;
    }

    void Attack(Dragon& enemy)
    {
        enemy._health -= (_attack - enemy._defense);
        cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �ٿ���." << endl;
    }

    void Info()
    {
        cout << "�̸�: " << _name << endl;
        cout << "�����: " << _health << endl;
        cout << "����: " << _defense << endl;
        cout << "���ݷ�: " << _attack << endl;
    }
};

class Ogre
{
private:
    string _name;
    int _health;
    int _attack;
    int _defense;

public:
    Ogre(string name, int health, int attack, int defense)
        : _name(name), _health(health), _attack(attack), _defense(_defense) {}
    void Attack(Ogre& enemy)
    {
        enemy._health -= (_attack - enemy._defense);
        cout << _name << "�� " << enemy._name << "�� �����ؼ� ������� " << enemy._health << "�� �ٿ���." << endl;
    }

    void Attack(Dragon& enemy)
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

    void Info()
    {
        cout << "�̸�: " << _name << endl;
        cout << "�����: " << _health << endl;
        cout << "����: " << _defense << endl;
        cout << "���ݷ�: " << _attack << endl;
    }
};

int main()
{
    Dragon dragonA("dragonA", 100, 24, 10);
    Dragon dragonB("dragonB", 90, 20, 12);

    Ogre ogreA("ogreA", 50, 10, 8);

    dragonA.Info();
    cout << endl;
    dragonB.Info();
    cout << endl;
    dragonA.Attack(dragonB);

    cout << endl;
    dragonB.Info();

    cout << endl;
    ogreA.Attack(dragonB);
    cout << endl;
    dragonB.Info();



    return 0;
}