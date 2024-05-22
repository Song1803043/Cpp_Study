#include <iostream>
#include <string>

using namespace std;
// 특수화
// 동물 육성 시뮬레이션게임.
// 돼지, 소, 닭
// 돌고래 추가

enum type
{
	COW,
	PIG,
	CHICKEN,
	DOLPHIN
};

class Animal
{
private:
	int _type; // 0: 소, 1: 돼지, 2: 닭, 3: 돌고래
	string _name;
	float _weight;
	float _height;
	float _healthRate;
	bool _isFly;
	bool _isSwim;

	void Fly()
	{
		cout << _name << "이 납니다." << endl;
	}

	void Swim()
	{
		cout << _name << "가 헤엄칩니다." << endl;
	}

public:
	Animal(int type, string name, float weight, float height, float healthRate, bool isFly, bool isSwim)
		:_type(type), _name(name), _weight(weight), _height(height), _healthRate(healthRate), _isFly(isFly), _isSwim(isSwim) {}

	void Speak()
	{
		switch (_type)
		{
		case COW:
			cout << _name << "가 음매합니다." << endl;
			break;
		case PIG:
			cout << _name << "가 꿀꿀합니다." << endl;
			break;
		case CHICKEN:
			cout << _name << "이 꼬끼오 합니다." << endl;
			break;
		case DOLPHIN:
			cout << _name << "가 끽끽합니다." << endl;
			break;
		default:
			cout << _name << "이 말합니다." << endl;
			break;
		}
	}

	void Run()
	{
		if (_isFly)
		{
			Fly();
		}
		else
		{
			if (_isSwim)
			{
				Swim();
			}
			else
			{
				cout << _name << "이 뜁니다." << endl;
			}
		}
	}

	string GetHealth()
	{
		if (_healthRate > 80)
		{
			return "매우 건강";
		}
		else if (_healthRate > 60 && _healthRate <= 80)
		{
			return "건강";
		}
		else if (_healthRate > 40 && _healthRate <= 60)
		{
			return "부실";
		}
		else
		{
			return "치료요망";
		}
	}

	void Info()
	{
		cout << "이름 : " << _name << endl;
		cout << "몸무게 : " << _weight << "kg" << endl;
		cout << "신장 : " << _height << "cm" << endl;
		cout << "건강지수 : " << GetHealth() << endl;

		if (_type == CHICKEN)
		{
			if (_isFly)
			{
				cout << "종류 : 나는 닭" << endl;
			}
			else
			{
				cout << "종류 : 못 나는 닭" << endl;
			}
		}
	}
};


int main()
{
	Animal pig(PIG, "돼지", 230.0f, 160.0f, 88.0f, false, false);
	Animal cow(COW, "소", 280.0f, 200.0f, 77.0f, false, false);
	Animal flyChicken(CHICKEN, "나는 닭", 3.8f, 43.5f, 90.0f, true, false);
	Animal notflyChicken(CHICKEN, "못 나는 닭", 4.5f, 40.0f, 68.0f, false, false);
	Animal dolphin(DOLPHIN, "돌고래", 300.0f, 200.0f, 84.0f, false, true);

	pig.Speak();
	cow.Speak();
	flyChicken.Speak();
	notflyChicken.Speak();
	dolphin.Speak();

	cout << endl;

	pig.Run();
	cow.Run();
	flyChicken.Run();
	notflyChicken.Run();
	dolphin.Run();

	cout << endl;
	pig.Info();
	cout << endl;
	cow.Info();
	cout << endl;
	flyChicken.Info();
	cout << endl;
	notflyChicken.Info();
	cout << endl;
	dolphin.Info();



	return 0;
}