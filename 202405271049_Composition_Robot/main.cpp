#include <iostream>
#include <string>

using namespace std;

// 클래스간에 관계를 맺는 방법
// 상속, 포함

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
        : Arm("캐논암")
    {

    }
};

class BomArm : public Arm
{
public:
    BomArm()
        : Arm("폭탄암")
    {

    }
};

class LazerArm : public Arm
{
public:
    LazerArm()
        : Arm("레이저암")
    {

    }
};

class GunArm : public Arm
{
public:
    GunArm()
        : Arm("건암")
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
        cout << _name << "로봇" << endl;
        cout << "왼쪽팔 : ";
        _pLeftArm->Info();
        cout << endl;
        cout << "오른팔 : ";
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

    Robot cannonArmRobot("캐논암", &cannonArm, &cannonArm);
    Robot bomAramRobot("폭탄암", &bomArm, &bomArm);
    Robot lazerArmRobot("레이저암", &lazerArm, &lazerArm);
    Robot gunArmRobot("건암", &gunArm, &gunArm);
    Robot lcannonArmRgunArmRobot("캐논건암", &cannonArm, &gunArm);

    cannonArmRobot.Info();
    bomAramRobot.Info();
    lazerArmRobot.Info();
    gunArmRobot.Info();
    lcannonArmRgunArmRobot.Info();

    lcannonArmRgunArmRobot.ChanegeLeftArm(&bomArm);
    lcannonArmRgunArmRobot.Info();

    return 0;
}