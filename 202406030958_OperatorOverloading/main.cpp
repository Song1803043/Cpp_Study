#include <iostream>

using namespace std;

// 복소수 클래스
class Complex
{
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		: _real(real), _imaginary(imaginary) {}

	int GetRea()
	{
		return _real;
	}

	int GetImaginary()
	{
		return _imaginary;
	}

	// 덧셈 기호에 대한 연산자 오버로딩 멤버함수
	// 해당 연산기호의 관습적인 사용방법에 준하여
	// 만들어라.(권고사항)
	Complex& operator+(Complex& rightValue)
	{
		Complex temp(_real + rightValue._real, _imaginary + rightValue._imaginary);

		return temp;
	}

	Complex& operator-(Complex& rightValue)
	{
		Complex temp(_real - rightValue._real, _imaginary - rightValue._imaginary);

		return temp;
	}

	// 관계연산자
	// <, >, <=, >=, ==, !=
	bool operator<(Complex& right)
	{
		return _real < right._real;
	}

	bool operator>(Complex& right)
	{
		return _real > right._real;
	}

	bool operator<=(Complex & right)
	{
		return _real <= right._real;
	}

	bool operator>=(Complex& right)
	{
		return _real >= right._real;
	}


	void Info()
	{
		cout << _real << showpos << _imaginary << "i";
		cout << noshowpos;
	}
};

int main()
{
	Complex a(10, 10);
	Complex b(12, 12);
	Complex c(0, 0);
	Complex d(0, 0);

	a.Info();
	cout << endl;
	b.Info();
	cout << endl;


	// 기본 제공 연산자는
	// 기본 데이터 타입에 연산 방법만 제공을 합니다.
	// C++ 언어에는 사용자가 만든 데이터 타입에 대한 연산기호를
	// 사용하는 방법을 제공하고 있습니다.
	// 연산자 오버로딩.

	c = a + b;
	c.Info();
	cout << endl;

	d = b - a;
	d.Info();
	cout << endl;

	bool ret = a < b;
	cout << "a < b = " << ret << endl;

	ret = a > b;
	// ret = a.operator>(b);
	cout << "a > b = " << ret << endl;

	return 0;
}