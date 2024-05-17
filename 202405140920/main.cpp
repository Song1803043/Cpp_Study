#include <iostream>

using namespace std;
// 창조형 변수
// 상수형 변수

int main()
{
	100;	// 상수(constant)
	200;

	int sum = 100 + 200;

	// 변수를 상수성을 띄도록 할 수 있습니다.
	// 변수를 만들때 변수의 정의 앞에 const 키워드를 사용하면
	// 변수가 상수성을 띄게 됩니다.
	// 상수형 변수는 만듦과 동시에 값을 초기화 해야합니다.
	const int MAX = 200; // O
	
	// const int MAX2; X 상수형 변수여서 저장하고 있는 값을 변경할 수 없음
	// MAX2 = 400;		X

	// 참조형 변수
	int a = 1000;
	int b = 2000;

	
	// 참조형 변수는 변수를 만듦과 동시에 해줘야 합니다.
	// a변수의 별칭인 refa가 만들어졌다.
	int& refa = a;	// 참조형 변수 refa를 만들었다.

	cout << "before refa = " << refa << endl;
	cout << "before a = " << a << endl;
	cout << endl;

	refa = 800;
	
	cout << "after refa = " << refa << endl;
	cout << "after a = " << a << endl;
	cout << endl;
	cout << "포인터형 변수" << endl;
	// 포인터형변수
	int* pa;	// int형 값을 저장하고 있는 공간의 주소값을 저장하는 변수 pa

	pa = &a;
	cout << "before refa = " << refa << endl;
	cout << "before a = " << a << endl;
	cout << "before pa = " << *pa << endl;
	cout << endl;
	*pa = 4000;

	cout << "after refa = " << refa << endl;
	cout << "after a = " << a << endl;
	cout << "after pa = " << *pa << endl;
	cout << endl;
	
	pa = &b;
	
	cout << "before a = " << a << endl;
	cout << "before pa = " << *pa << endl;
	cout << "before a = " << b << endl;
	cout << endl;
	*pa = 6000;
	cout << endl;
	cout << "after a = " << a << endl;
	cout << "after pa = " << *pa << endl;
	cout << "after b = " << b << endl;

	// 참조형변수는 포인터형변수와 내부적인 작동 방식은 동일하나
	// 참조형변수는 초기값으로 전달된 변수의 주소값을 변경할 수 없습니다.
	// 참조형변수 생성할때 전달된 변수의 메모리 공간만 가리키게 됩니다.


	return 0;
}