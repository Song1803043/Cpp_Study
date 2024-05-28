#include <iostream>
#include <string>

using namespace std;

// Å¬·¡½º°£¿¡ °ü°è¸¦ ¸Î´Â ¹æ¹ý
// »ó¼Ó, Æ÷ÇÔ

class CannonArm
{
private:
    string _name;

public:
    CannonArm()
        : _name("Ä³³í¾Ï")
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
        : _name("ÆøÅº¾Ï")
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
        : _name("·¹ÀÌÀú¾Ï")
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
        cout << "Ä³³í¾Ï·Îº¿" << endl;
        cout << "¿ÞÂÊÆÈ : ";
        _leftArm.Info();
        cout << endl;
        cout << "¿À¸¥ÆÈ : ";
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
        cout << "ÆøÅº¾Ï·Îº¿" << endl;
        cout << "¿ÞÂÊÆÈ : ";
        _leftArm.Info();
        cout << endl;
        cout << "¿À¸¥ÆÈ : ";
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
        cout << "·¹ÀÌÀú¾Ï·Îº¿" << endl;
        cout << "¿ÞÂÊÆÈ : ";
        _leftArm.Info();
        cout << endl;
        cout << "¿À¸¥ÆÈ : ";
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