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

    void Attack(Dragon& enemy)
    {
        enemy._health -= (_attack - enemy._defense);
        cout << _name << "가 " << enemy._name << "을 공격해서 생명력이 " << enemy._health << "로 줄였음." << endl;
    }

    void Info()
    {
        cout << "이름: " << _name << endl;
        cout << "생명력: " << _health << endl;
        cout << "방어력: " << _defense << endl;
        cout << "공격력: " << _attack << endl;
    }
};

int main()
{
    Dragon dragonA("dragonA", 100, 24, 10);
    Dragon dragonB("dragonB", 90, 20, 12);

    dragonA.Info();
    cout << endl;
    dragonB.Info();
    cout << endl;
    dragonA.Attack(dragonB);

    cout << endl;
    dragonB.Info();



    return 0;
}