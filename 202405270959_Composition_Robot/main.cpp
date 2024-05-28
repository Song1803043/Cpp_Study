#include <iostream>
#include <string>

using namespace std;

// Å¬·¡½º°£¿¡ °ü°è¸¦ ¸Î´Â ¹æ¹ý
// »ó¼Ó, Æ÷ÇÔ

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
        : Arm("Ä³³í¾Ï")
    {

    }
};

class BomArm : public Arm
{
public:
    BomArm()
        : Arm("ÆøÅº¾Ï")
    {

    }
};

class LazerArm : public Arm
{
public:
    LazerArm()
        : Arm("·¹ÀÌÀú¾Ï")
    {

    }
};

class GunArm : public Arm
{
public:
    GunArm()
        : Arm("°Ç¾Ï")
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
        cout << _name << "·Îº¿" << endl;
        cout << "¿ÞÂÊÆÈ : ";
        _leftArm.Info();
        cout << endl;
        cout << "¿À¸¥ÆÈ : ";
        _rightArm.Info();
        cout << endl;
        cout << endl;
    }
};

class CannonArmRobot : public Robot
{
public:
    CannonArmRobot(CannonArm& leftArm, CannonArm& rightArm)
        : Robot("Ä³³í¾Ï", leftArm, rightArm)
    {}
};

class BomArmRobot : public Robot
{
public:
    BomArmRobot(BomArm& leftArm, BomArm& rightArm)
        : Robot("ÆøÅº¾Ï", leftArm, rightArm)
    {}
};

class LazerArmRobot : public Robot
{
public:
    LazerArmRobot(LazerArm& leftArm, LazerArm& rightArm)
        : Robot("·¹ÀÌÀú¾Ï", leftArm, rightArm)
    {}
};

class GunArmRobot : public Robot
{
public:
    GunArmRobot(GunArm& leftArm, GunArm& rightArm)
        : Robot("°Ç¾Ï", leftArm, rightArm)
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