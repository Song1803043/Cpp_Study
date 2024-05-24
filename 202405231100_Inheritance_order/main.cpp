#include <iostream>

using namespace std;

// 상속관계에서의 생성자와 소멸자의 호출 순서

class Parent
{
private:
    int _value;

public:
    Parent()
    {
        cout << "Parent 클래스 생성자" << endl;
    }

    ~Parent()
    {
        cout << "Parent 클래스 소멸자" << endl;
    }
};

class Derived : public Parent
{
private:
    int _valueDerived;

public:
    Derived()
    {
        cout << "Derived 클래스 생성자" << endl;
    }

    ~Derived()
    {
        cout << "Derived 클래스 소멸자" << endl;
    }
};

int main()
{
    Derived dervied;



    return 0;
}