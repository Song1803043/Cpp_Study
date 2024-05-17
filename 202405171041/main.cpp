#include <iostream>
#include <string>

using namespace std;
// ���� �ִ� ������ǰ 3������ Ŭ������ ���� �����
// ��ü ������ �Ŀ� ��ü�� ���� �����ϰ� ����غ�����.

class Refrigerator
{
	string _brand;
	string _location;
	float _powerConsumption;

public:
	Refrigerator(string brand, string location, int powerconsumtion)
		:_brand(brand), _location(location), _powerConsumption(powerconsumtion){}

	void Info()
	{
		cout << "    �����" << endl;
		cout << "�귣�� : " << _brand << endl;
		cout << "  ��ġ : " << _location << endl;
		cout << "  ��� : " << _powerConsumption << "W" << endl << endl;
	}
};

class Microwave
{
private:
	string _brand;
	string _location;
	int _powerConsumption;

public:
	Microwave(string brand, string location, int powerconsumtion)
		:_brand(brand), _location(location), _powerConsumption(powerconsumtion) {}

	void Info()
	{
		cout << " ���ڷ�����" << endl;
		cout << "�귣�� : " << _brand << endl;
		cout << "  ��ġ : " << _location << endl;
		cout << "  ��� : " << _powerConsumption << "W" << endl << endl;
	}
};

class Air_conditioner
{
private:
	string _brand;
	string _location;
	int _powerConsumption;

public:
	Air_conditioner(string brand, string location, int powerconsumtion)
		:_brand(brand), _location(location), _powerConsumption(powerconsumtion) {}

	void Info()
	{
		cout << "    ������" << endl;
		cout << "�귣�� : " << _brand << endl;
		cout << "  ��ġ : " << _location << endl;
		cout << "  ��� : " << _powerConsumption << "W" << endl << endl;
	}
};


int main() 
{
	Refrigerator ref("LG", "�ξ�", 56.8);
	Microwave mic("�Ｚ", "�ξ�", 1100);
	Air_conditioner air("�Ｚ", "�Ž�", 2200);
	
	ref.Info();
	mic.Info();
	air.Info();

	return 0;
}