#include <iostream>
#include <string>

using namespace std;
// �����ε�.(Overloading)
// ���� �̸��� �Լ��� ����� ��

// C���� ���� ������Ʈ ������ �̸��� �Լ��� ���� �� �����ϴ�.
// C++������ ���� ������Ʈ�� ������ �̸��� �Լ��� ���� �� �ֽ��ϴ�.
// ������ �̸��� �Լ��� ����ϴ� ���� �����ε��̶�� �մϴ�.
// C++������ ���������� ����� �Լ��� �̸��� ���̹� �Ҷ� ���� �ͱ۸��̶�� ����� ����մϴ�.
// ���Ӹͱ۸��� ���������� ����� �Լ� �̸��� �Լ� �Ű������� ������ Ÿ�԰� ������ ���Խ�Ű�� ����Դϴ�.
// returnType�� ���Ե��� �ʽ��ϴ�.

float add(float a, float b) // addYY
{
	return a + b;
}

int add(int a, int b) // addXX
{
	return a + b;
}

/* ���� ��Ȳ
//return Type�� �Լ� �̸��� ���Ե��� �ʽ��ϴ�.
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
	call _add; // C������ ���������� ����� �̸��� ���̹� �Ҷ� �⺻ �Լ��� �տ� _(underscore)�� ���Դϴ�.
	*/

	return 0;
}