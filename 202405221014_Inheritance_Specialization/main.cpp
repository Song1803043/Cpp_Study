#include <iostream>
#include <string>

using namespace std;
// Ư��ȭ
// ���� ���� �ùķ��̼ǰ���.
// ����, ��, ��
// ���� �߰�

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
	int _type; // 0: ��, 1: ����, 2: ��, 3: ����
	string _name;
	float _weight;
	float _height;
	float _healthRate;
	bool _isFly;
	bool _isSwim;

	void Fly()
	{
		cout << _name << "�� ���ϴ�." << endl;
	}

	void Swim()
	{
		cout << _name << "�� ���Ĩ�ϴ�." << endl;
	}

public:
	Animal(int type, string name, float weight, float height, float healthRate, bool isFly, bool isSwim)
		:_type(type), _name(name), _weight(weight), _height(height), _healthRate(healthRate), _isFly(isFly), _isSwim(isSwim) {}

	void Speak()
	{
		switch (_type)
		{
		case COW:
			cout << _name << "�� �����մϴ�." << endl;
			break;
		case PIG:
			cout << _name << "�� �ܲ��մϴ�." << endl;
			break;
		case CHICKEN:
			cout << _name << "�� ������ �մϴ�." << endl;
			break;
		case DOLPHIN:
			cout << _name << "�� �����մϴ�." << endl;
			break;
		default:
			cout << _name << "�� ���մϴ�." << endl;
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
				cout << _name << "�� �ݴϴ�." << endl;
			}
		}
	}

	string GetHealth()
	{
		if (_healthRate > 80)
		{
			return "�ſ� �ǰ�";
		}
		else if (_healthRate > 60 && _healthRate <= 80)
		{
			return "�ǰ�";
		}
		else if (_healthRate > 40 && _healthRate <= 60)
		{
			return "�ν�";
		}
		else
		{
			return "ġ����";
		}
	}

	void Info()
	{
		cout << "�̸� : " << _name << endl;
		cout << "������ : " << _weight << "kg" << endl;
		cout << "���� : " << _height << "cm" << endl;
		cout << "�ǰ����� : " << GetHealth() << endl;

		if (_type == CHICKEN)
		{
			if (_isFly)
			{
				cout << "���� : ���� ��" << endl;
			}
			else
			{
				cout << "���� : �� ���� ��" << endl;
			}
		}
	}
};


int main()
{
	Animal pig(PIG, "����", 230.0f, 160.0f, 88.0f, false, false);
	Animal cow(COW, "��", 280.0f, 200.0f, 77.0f, false, false);
	Animal flyChicken(CHICKEN, "���� ��", 3.8f, 43.5f, 90.0f, true, false);
	Animal notflyChicken(CHICKEN, "�� ���� ��", 4.5f, 40.0f, 68.0f, false, false);
	Animal dolphin(DOLPHIN, "����", 300.0f, 200.0f, 84.0f, false, true);

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