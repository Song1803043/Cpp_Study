#include <iostream>
#include <string>

using namespace std;


class Car {
private:
    string _modelName;
    int _wheelCount;
    float _speed;
    bool isCargo;

public:
    static const int MAXSPEED = 200;

    Car(string modelName, int wheelCount, float speed)
        : _modelName(modelName), _wheelCount(wheelCount), _speed(speed) {}

    void SetIsCargo(bool isCargo) 
    {
        this->isCargo = isCargo;
    }

    void Acceleration() 
    {
        _speed += 10;

        if (_speed > MAXSPEED) 
        {
            cout << _modelName << "의 속도가 최대속도 입니다.\n" << endl;
            _speed = MAXSPEED;
        }
        else 
        {
            cout << _modelName << "의 속도를 10 올려서 현재속도가 " << _speed << "입니다." << endl;
        }
    }

    void Break() {
        _speed -= 10;

        if (_speed <= 0) 
        {
            cout << _modelName << "이 정지하였습니다.\n" << endl;

        }
        else 
        {
            cout << _modelName << "의 속도를 10 내려서 현재속도가 " << _speed << " 입니다." << endl;
        }
    }

    // this : 자기 참조형 포인터, 객체가 할당받은 메모리 주소값(who am i pointer)
    // 객체가 멤버함수를 호출할때 자신의 this 포인터를 같이 전달합니다.
    // 멤버함수 전달받은 this 포인터로 멤버 변수에 접근을 하기 때문에
    // 정확히 자신을 호출한 객체의 멤버변수에 접근할 수 있습니다.
    // 이런 메커니즘에 의해서 멤버함수를 객체를 통해서만 호출 할 수 있습니다.

    void Info() 
    {
        cout << "모델명: " << this->_modelName << endl;
        cout << "바퀴수: " << this->_wheelCount << endl;
        cout << "현재속도: " << this->_speed << endl;
        cout << "최대속도: " << this->MAXSPEED << endl;
        cout << "this pointer : " << this << endl;
    }
};

int main() 
{
    Car cona("코나", 4, 100);
    Car k5("k5", 4, 180);
    Car genesis("제네시스", 4, 190);

    cout << endl;
    cona.Acceleration();
    k5.Acceleration();
    genesis.Acceleration();

    cout << endl;
    k5.Break();

    cout << endl;
    cona.Info();
    cout << endl;
    k5.Info();
    cout << endl;
    genesis.Info();


    return 0;
}