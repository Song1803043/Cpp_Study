#include <iostream>

using namespace std;

// ���Ҽ� Ŭ����
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

	// ���� ��ȣ�� ���� ������ �����ε� ����Լ�
	// �ش� �����ȣ�� �������� ������� ���Ͽ�
	// ������.(�ǰ����)
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

	// ���迬����
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


	// �⺻ ���� �����ڴ�
	// �⺻ ������ Ÿ�Կ� ���� ����� ������ �մϴ�.
	// C++ ���� ����ڰ� ���� ������ Ÿ�Կ� ���� �����ȣ��
	// ����ϴ� ����� �����ϰ� �ֽ��ϴ�.
	// ������ �����ε�.

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