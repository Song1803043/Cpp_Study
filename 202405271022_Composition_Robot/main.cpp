#include <iostream>
#include <string>

using namespace std;

// Ŭ�������� ���踦 �δ� ���
// ���, ����

class Arm
{
private:
    string _name;

public:
    Arm(string name)
        : _name(name)
    {

    }

    void Info()
    {
        cout << _name;
    }
};

class CannonArm : public Arm
{
public:
    CannonArm()
        : Arm("ĳ���")
    {

    }
};

class BomArm : public Arm
{
public:
    BomArm()
        : Arm("��ź��")
    {

    }
};

class LazerArm : public Arm
{
public:
    LazerArm()
        : Arm("��������")
    {

    }
};

class GunArm : public Arm
{
public:
    GunArm()
        : Arm("�Ǿ�")
    {

    }
};

class Robot
{
private:
    string _name;
    Arm& _leftArm;
    Arm& _rightArm;

public:
    Robot(string name, Arm& leftArm, Arm& rightArm)
        :_name(name), _leftArm(leftArm), _rightArm(rightArm) {}

    void Info()
    {
        cout << _name << "�κ�" << endl;
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
    CannonArm cannonArm;
    BomArm bomArm;
    LazerArm lazerArm;
    GunArm gunArm;

    Robot cannonArmRobot("ĳ���", cannonArm, cannonArm);
    Robot bomAramRobot("��ź��", bomArm, bomArm);
    Robot lazerArmRobot("��������", lazerArm, lazerArm);
    Robot gunArmRobot("�Ǿ�", gunArm, gunArm);
    Robot lcannonArmRgunArmRobot("ĳ��Ǿ�", cannonArm, gunArm);

    cannonArmRobot.Info();
    bomAramRobot.Info();
    lazerArmRobot.Info();
    gunArmRobot.Info();
    lcannonArmRgunArmRobot.Info();


    return 0;
}