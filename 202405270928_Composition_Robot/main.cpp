#include <iostream>
#include <string>

using namespace std;

// Ŭ�������� ���踦 �δ� ���
// ���, ����

class CannonArm
{
private:
    string _name;

public:
    CannonArm()
        : _name("ĳ���")
    {

    }

    void Info()
    {
        cout << _name;
    }
};

class BomArm
{
private:
    string _name;

public:
    BomArm()
        : _name("��ź��")
    {

    }

    void Info()
    {
        cout << _name;
    }
};

class LazerArm
{
private:
    string _name;

public:
    LazerArm()
        : _name("��������")
    {

    }

    void Info()
    {
        cout << _name;
    }
};

class CannonArmRobot
{
private:
    CannonArm _leftArm, _rightArm; // Composition

public:
    CannonArmRobot() {}

    void Info()
    {
        cout << "ĳ��Ϸκ�" << endl;
        cout << "������ : ";
        _leftArm.Info();
        cout << endl;
        cout << "������ : ";
        _rightArm.Info();
        cout << endl;
        cout << endl;
    }
};

class BomArmRobot
{
private:
    BomArm _leftArm, _rightArm;

public:
    BomArmRobot() {}

    void Info()
    {
        cout << "��ź�Ϸκ�" << endl;
        cout << "������ : ";
        _leftArm.Info();
        cout << endl;
        cout << "������ : ";
        _rightArm.Info();
        cout << endl;
        cout << endl;
    }

};

class LazerArmRobot
{
private:
    LazerArm _leftArm, _rightArm;

public:
    LazerArmRobot() {}

    void Info()
    {
        cout << "�������Ϸκ�" << endl;
        cout << "������ : ";
        _leftArm.Info();
        cout << endl;
        cout << "������ : ";
        _rightArm.Info();
        cout << endl;
        cout << endl;
    }

};

int main()
{
    CannonArmRobot cannonArmRobot;
    BomArmRobot bomAramRobot;
    LazerArmRobot lazerArmRobot;

    cannonArmRobot.Info();
    bomAramRobot.Info();
    lazerArmRobot.Info();



    return 0;
}