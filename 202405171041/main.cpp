#include <iostream>
#include <string>

using namespace std;
// 집에 있는 전자제품 3종류의 클래스를 각각 만들고
// 객체 생성한 후에 객체의 값을 저장하고 출력해보세요.

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
		cout << "    냉장고" << endl;
		cout << "브랜드 : " << _brand << endl;
		cout << "  위치 : " << _location << endl;
		cout << "  출력 : " << _powerConsumption << "W" << endl << endl;
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
		cout << " 전자레인지" << endl;
		cout << "브랜드 : " << _brand << endl;
		cout << "  위치 : " << _location << endl;
		cout << "  출력 : " << _powerConsumption << "W" << endl << endl;
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
		cout << "    에어컨" << endl;
		cout << "브랜드 : " << _brand << endl;
		cout << "  위치 : " << _location << endl;
		cout << "  출력 : " << _powerConsumption << "W" << endl << endl;
	}
};


int main() 
{
	Refrigerator ref("LG", "부엌", 56.8);
	Microwave mic("삼성", "부엌", 1100);
	Air_conditioner air("삼성", "거실", 2200);
	
	ref.Info();
	mic.Info();
	air.Info();

	return 0;
}