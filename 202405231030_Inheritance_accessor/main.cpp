#include <iostream>
#include <string>

using namespace std;

// 상속관계에서의 접근제어자


class A
{
public:
    int _value;
    int _value2;

public:
    A() : _value(0), _value2(0) {}
    A(int value, int value2)
        : _value(value), _value2(value2) {}
};

class B final : public A
{
public:
    int _value3;
    int _value4;

public:
    B() : A(0, 0), _value3(0), _value4(0) {}

    B(int value, int value2, int value3, int value4)
        : A(value, value2), _value3(value3), _value4(value4) {}


    void Info()
    {
        cout << "_value = " << _value << endl;
        cout << "_value2 = " << _value2 << endl;
        cout << "_value3 = " << _value3 << endl;
        cout << "_value4 = " << _value4 << endl;
    }
};

//class C : B
//{
//
//};


int main()
{
    A a(100, 200);
    B b(10, 20, 30, 40);

    cout << "a_value = " << a._value << endl;
    cout << "a_value2 = " << a._value2 << endl;

    cout << endl;
    cout << "b_value = " << b._value << endl;
    cout << "b_value2 = " << b._value2 << endl;
    cout << "b_value3 = " << b._value3 << endl;
    cout << "b_value4 = " << b._value4 << endl;


    return 0;
}