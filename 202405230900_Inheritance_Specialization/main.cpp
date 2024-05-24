#include <iostream>
#include <string>

using namespace std;
// Ư��ȭ
// ���� ���� �ùķ��̼ǰ���.
// ����, ��, ��, ����

class Animal
{
protected:
    string _name;
    float _weight;
    float _height;
    float _healthRate;


public:
    Animal(string name, float weight, float height, float healthRate)
        :_name(name), _weight(weight), _height(height), _healthRate(healthRate) {}



    void Run()
    {
        cout << _name << "�� �ݴϴ�." << endl;

    }

    string GetHealth()
    {
        if (_healthRate > 80)
        {
            return "�ſ� �ǰ�";
        }
        else if (_healthRate > 60 && _healthRate <= 80)
        {
            return "�ǰ�";
        }
        else if (_healthRate > 40 && _healthRate <= 60)
        {
            return "�ν�";
        }
        else
        {
            return "ġ����";
        }
    }

    void Info()
    {
        cout << "�̸� : " << _name << endl;
        cout << "������ : " << _weight << "kg" << endl;
        cout << "���� : " << _height << "cm" << endl;
        cout << "�ǰ����� : " << GetHealth() << endl;


    }
};

class Cow : public Animal
{
public:
    Cow(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "�� ����մϴ�." << endl;
    }

};

class Pig : public Animal
{
public:
    Pig(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "�� �ܲ��մϴ�." << endl;
    }

};

class Chicken : public Animal
{
private:
    bool _isFly;

    void Fly()
    {
        cout << _name << "�� ���ϴ�." << endl;
    }

public:
    Chicken(string name, float weight, float height, float healthRate, bool isFly)
        : Animal(name, weight, height, healthRate), _isFly(isFly) {}

    void Speak()
    {
        cout << _name << "�� �������մϴ�." << endl;
    }

    void Run()
    {
        if (_isFly)
        {
            Fly();
        }
        else
        {
            Animal::Run();
        }
    }

    void Info()
    {
        Animal::Info();
        if (_isFly)
        {
            cout << "���� : ���� ��" << endl;
        }
        else
        {
            cout << "���� : �� ���� ��" << endl;
        }
    }


};

class Dolphin : public Animal
{
private:
    void Swim()
    {
        cout << _name << "�� ���Ĩ�ϴ�." << endl;
    }

public:
    Dolphin(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "�� �����մϴ�." << endl;
    }

    void Run()
    {
        Swim();
    }

};

int main()
{
    Pig pig("����", 230.0f, 160.0f, 88.0f);
    Cow cow("��", 280.0f, 200.0f, 77.0f);
    Chicken flyChicken("���� ��", 3.8f, 43.5f, 90.0f, true);
    Chicken notflyChicken("�� ���� ��", 4.5f, 40.0f, 68.0f, false);
    Dolphin dolphin("����", 300.0f, 200.0f, 84.0f);

    pig.Speak();
    cow.Speak();
    flyChicken.Speak();
    notflyChicken.Speak();
    dolphin.Speak();

    cout << endl;

    pig.Run();
    cow.Run();
    flyChicken.Run();
    notflyChicken.Run();
    dolphin.Run();

    cout << endl;
    pig.Info();
    cout << endl;
    cow.Info();
    cout << endl;
    flyChicken.Info();
    cout << endl;
    notflyChicken.Info();
    cout << endl;
    dolphin.Info();



    return 0;
}