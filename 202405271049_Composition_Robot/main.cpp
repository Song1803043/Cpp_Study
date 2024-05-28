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
    Arm* _pLeftArm;
    Arm* _pRightArm;

public:
    Robot(string name, Arm* pleftArm, Arm* prightArm)
        :_name(name), _pLeftArm(pleftArm), _pRightArm(prightArm) {}

    void ChanegeLeftArm(Arm* pleftArm)
    {
        _pLeftArm = pleftArm;
    }

    void ChanegeRightArm(Arm* prightArm)
    {
        _pRightArm = prightArm;
    }

    void Info()
    {
        cout << _name << "�κ�" << endl;
        cout << "������ : ";
        _pLeftArm->Info();
        cout << endl;
        cout << "������ : ";
        _pRightArm->Info();
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

    Robot cannonArmRobot("ĳ���", &cannonArm, &cannonArm);
    Robot bomAramRobot("��ź��", &bomArm, &bomArm);
    Robot lazerArmRobot("��������", &lazerArm, &lazerArm);
    Robot gunArmRobot("�Ǿ�", &gunArm, &gunArm);
    Robot lcannonArmRgunArmRobot("ĳ��Ǿ�", &cannonArm, &gunArm);

    cannonArmRobot.Info();
    bomAramRobot.Info();
    lazerArmRobot.Info();
    gunArmRobot.Info();
    lcannonArmRgunArmRobot.Info();

    lcannonArmRgunArmRobot.ChanegeLeftArm(&bomArm);
    lcannonArmRgunArmRobot.Info();

    return 0;
}