#include <iostream>

using namespace std;

class Complex
{
private:
	int _real;
	int _imaginary;

public:
	Complex(int real, int imaginary)
		:_real(real), _imaginary(imaginary)
	{
		cout << "인자를 받는 생성자" << endl;
	}

	Complex(Complex& ref)
		:_real(ref._real), _imaginary(ref._imaginary)
	{
		cout << "Complex 복사생성자" << endl;
	}

	int GetReal()
	{
		return _real;
	}

	int GetImaginary()
	{
		return _imaginary;
	}

	void Info()
	{
		cout << _real << showpos << _imaginary << "i";
		cout << noshowpos << endl;
	}
};

int main()
{
	Complex a(10, -10);

	cout << "a객체 : ";
	a.Info();

	//Complex b = a;
	Complex b(a); // 복사생성자 : 자신의 타입을 인자로 받는 생성자
				  // 일반적으로는 복사생성자를 안만드셔도 됩니다.
				  // 복사생성자가 없으면 컴파일러가 자동으로 만들어 줍니다.

	cout << "b객체 : ";
	b.Info();



	return 0;
}