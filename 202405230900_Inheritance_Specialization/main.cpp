#include <iostream>
#include <string>

using namespace std;
// 특수화
// 동물 육성 시뮬레이션게임.
// 돼지, 소, 닭, 돌고래

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
        cout << _name << "이 뜁니다." << endl;

    }

    string GetHealth()
    {
        if (_healthRate > 80)
        {
            return "매우 건강";
        }
        else if (_healthRate > 60 && _healthRate <= 80)
        {
            return "건강";
        }
        else if (_healthRate > 40 && _healthRate <= 60)
        {
            return "부실";
        }
        else
        {
            return "치료요망";
        }
    }

    void Info()
    {
        cout << "이름 : " << _name << endl;
        cout << "몸무게 : " << _weight << "kg" << endl;
        cout << "신장 : " << _height << "cm" << endl;
        cout << "건강지수 : " << GetHealth() << endl;


    }
};

class Cow : public Animal
{
public:
    Cow(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "가 움매합니다." << endl;
    }

};

class Pig : public Animal
{
public:
    Pig(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "가 꿀꿀합니다." << endl;
    }

};

class Chicken : public Animal
{
private:
    bool _isFly;

    void Fly()
    {
        cout << _name << "이 납니다." << endl;
    }

public:
    Chicken(string name, float weight, float height, float healthRate, bool isFly)
        : Animal(name, weight, height, healthRate), _isFly(isFly) {}

    void Speak()
    {
        cout << _name << "이 꼬꼬댁합니다." << endl;
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
            cout << "종류 : 나는 닭" << endl;
        }
        else
        {
            cout << "종류 : 못 나는 닭" << endl;
        }
    }


};

class Dolphin : public Animal
{
private:
    void Swim()
    {
        cout << _name << "가 헤엄칩니다." << endl;
    }

public:
    Dolphin(string name, float weight, float height, float healthRate)
        : Animal(name, weight, height, healthRate) {}

    void Speak()
    {
        cout << _name << "가 끽끽합니다." << endl;
    }

    void Run()
    {
        Swim();
    }

};

int main()
{
    Pig pig("돼지", 230.0f, 160.0f, 88.0f);
    Cow cow("소", 280.0f, 200.0f, 77.0f);
    Chicken flyChicken("나는 닭", 3.8f, 43.5f, 90.0f, true);
    Chicken notflyChicken("못 나는 닭", 4.5f, 40.0f, 68.0f, false);
    Dolphin dolphin("돌고래", 300.0f, 200.0f, 84.0f);

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