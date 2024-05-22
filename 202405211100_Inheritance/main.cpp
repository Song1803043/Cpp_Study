#include <iostream>

using namespace std;

// 상속
// 상속을 하는 방법에는
// 일반화, 특수화

// 동물육성 시뮬레이션 게임
// 소, 돼지, 닭

class Stock 
{
private:
	string _name;	// 이름
	float _weight;	// 몸무게
	float _height; // 신장
	float _health; // 건강지수

public:
	Stock(string name, float weight, float height, float health)
		:_name(name), _weight(weight), _height(height), _health(health)
	{}

	string GetName()
	{
		return _name;
	}

	void Speak()
	{
		cout << _name << "가 말합니다." << endl;
	}

	void Run()
	{
		cout << _name << "가(이) 뜁니다." << endl;
	}

	void Eat()
	{
		cout << _name << "가 먹습니다." << endl;
	}

	string GetHealth()
	{
		if (_health > 80)
		{
			return "매우 건강";
		}
		else if (_health > 60 && _health <= 80)
		{
			return "건강";
		}
		else if (_health > 40 && _health <= 60)
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
	}
};

class Cow : public Stock 
{
public:
	Cow(string name, float weight, float height, float health)
		: Stock(name, weight, height, health) {}

	void Speak()
	{
		cout << GetName() << "가 음매합니다." << endl;
	}
};

class Pig : public Stock
{
public:
	Pig(string name, float weight, float height, float health)
		: Stock(name, weight, height, health) {}

	void Speak()
	{
		cout << GetName() << "가 꿀꿀합니다." << endl;
	}
};

class Chicken : public Stock
{
private:
	bool _isFly;

	void Fly()
	{
		cout << GetName() << "이 납니다." << endl;
	}

public:
	Chicken(string name, float weight, float height, float health, bool isFly)
		: Stock(name, weight, height, health), _isFly(isFly) {}

	void Speak()
	{
		cout << GetName() << "이 꼬끼오합니다." << endl;
	}

	void Run()
	{
		if (_isFly)
		{
			Fly();
		}
		else
		{
			Stock::Run();
		}
	}


	void Info()
	{
		Stock::Info();
		
		if (_isFly)
		{
			cout << "종류 : 나는 닭" << endl;
		}
		else
		{
			cout << "종류 : 못나는 닭" << endl;
		}

		cout << endl;
	}
};

class Sheep : public Stock
{
	int _type; // 0: 털을 제공하는 양, 1: 고기를 제공하는 양

public:
	Sheep(string name, float weight, float height, float health, int type)
		: Stock(name, weight, height, health), _type(type) {}

	void Speak()
	{
		cout << GetName() << "이 음매에에합니다." << endl;
	}

	void Info()
	{
		Stock::Info();
		switch (_type)
		{
		case 0:
			cout << "종류 : 털양" << endl;
			break;
		case 1:
			cout << "종류 : 고기 양" << endl;
			break;
		default:
			cout << "종류 : 미확인" << endl;
			break;
		}
	}
};

int main()
{
	Cow cow("소", 140.5f, 200.0f, 81.0f);
	Pig pig("돼지", 190.f, 160.f, 75.0f);
	Chicken flyChicken("나는 닭", 4.0f, 40.0f, 60.0f, true);
	Chicken notFlyChicken("못나는 닭", 3.8f, 40.0f, 60.0f, false);
	Sheep purSheep("털양", 120.3f, 150.0f, 68.0f, 0);
	Sheep beefSheep("고기 양", 120.3f, 150.0f, 90.3f, 1);

	cow.Speak();
	pig.Speak();
	flyChicken.Speak();
	notFlyChicken.Speak();
	purSheep.Speak();
	beefSheep.Speak();

	cout << endl;
	cow.Run();
	pig.Run();
	flyChicken.Run();
	notFlyChicken.Run();
	purSheep.Run();
	beefSheep.Run();

	cout << endl;

	cow.Info();
	cout << endl;
	pig.Info();
	cout << endl;
	flyChicken.Info();
	cout << endl;
	notFlyChicken.Info();
	cout << endl;
	purSheep.Info();
	cout << endl;
	beefSheep.Info();


	return 0;
}