#include <iostream>
#include <string>

using namespace std;
// 오버로딩.(Overloading)
// 같은 이름의 함수를 만드는 것

// C언어는 같은 프로젝트 동일한 이름의 함수가 있을 수 없습니다.
// C++에서는 같은 프로젝트에 동일한 이름의 함수가 있을 수 있습니다.
// 동일한 이름의 함수를 사용하는 것을 오버로딩이라고 합니다.
// C++에서는 내부적으로 사용할 함수의 이름을 네이밍 할때 네잉 맹글링이라는 방법을 사용합니다.
// 네임맹글링은 내부적으로 사용할 함수 이름에 함수 매개변수의 데이터 타입과 갯수를 포함시키는 방법입니다.
// returnType은 포함되지 않습니다.

float add(float a, float b) // addYY
{
	return a + b;
}

int add(int a, int b) // addXX
{
	return a + b;
}

/* 에러 상황
//return Type은 함수 이름에 포함되지 않습니다.
float add(int a, int b) // addXX
{
	return a + b;
}
*/

float add(float a, int b) // addZZ
{
	return a + (float)b;
}

double add(double a, double b) // addYX
{
	return a + b;
}

string add(string a, string b) // addSS
{
	return a + b;
}

int add(int a, int b, int c) // addXXX
{
	return a + b + c;
}

class Math2
{
public:
	int add(int a, int b)
	{
		return a + b;
	}

	float add(float a, float b)
	{
		return a + b;
	}
};



int main()
{
	int a = 20;
	int b = 30;
	int i = 40;

	float c = 2.4f;
	float d = 3.4f;

	double e = 10.3;
	double f = 23.4;

	string g = "Monster";
	string h = "is World!";

	cout << a << " + " << b << " = " << add(a, b) << endl; // call addXX
	cout << c << " + " << d << " = " << add(c, d) << endl; // call addYY
	cout << e << " + " << f << " = " << add(e, f) << endl; // call addZZ
	cout << g << " + " << h << " = " << add(g, h) << endl; // call addSS

	cout << a << " + " << b << " + " << i << " = " << add(a, b, i) << endl; // call addXXX


	/*
	int ret = add(a, b);
	call _add; // C언어에서는 내부적으로 사요할 이름을 네이밍 할때 기본 함수명 앞에 _(underscore)를 붙입니다.
	*/

	return 0;
}