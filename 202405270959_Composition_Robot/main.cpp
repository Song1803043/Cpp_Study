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

class CannonArmRobot : public Robot
{
public:
    CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
        : Robot("ĳ���", leftArm, rightArm)
    {}
};

class BomArmRobot : public Robot
{
public:
    BomArmRobot(BomArm& leftArm, BomArm& rightArm)
        : Robot("��ź��", leftArm, rightArm)
    {}
};

class LazerArmRobot : public Robot
{
public:
    LazerArmRobot(LazerArm& leftArm, LazerArm& rightArm)
        : Robot("��������", leftArm, rightArm)
    {}
};

class GunArmRobot : public Robot
{
public:
    GunArmRobot(GunArm& leftArm, GunArm& rightArm)
        : Robot("�Ǿ�", leftArm, rightArm)
    {}
};

int main()
{
    CannonArm cannonArm;
    BomArm bomArm;
    LazerArm lazerArm;
    GunArm gunArm;

    CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
    BomArmRobot bomAramRobot(bomArm, bomArm);
    LazerArmRobot lazerArmRobot(lazerArm, lazerArm);
    GunArmRobot gunArmRobot(gunArm, gunArm);

    cannonArmRobot.Info();
    bomAramRobot.Info();
    lazerArmRobot.Info();
    gunArmRobot.Info();



    return 0;
}