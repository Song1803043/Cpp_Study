#include "Building.h"

// C++언어는 태생적으로 C언어의 구문 구조를 기반으로 개발이 되어서
// 선언부(.h), 구현부(.cpp)로 나누어서 개발하게 되어있습니다.
// 클래스 선언부 내부에서 멤버함수를 구현하는 경우에 컴파일러는 구현부에서  구현했을때와
// 다르게 받아드립니다.
// inline함수로 만들어달라는 요청으로 받아드립니다.

int main()
{
	Building starTower("스타타워", 112300.23f, 23);

	cout << "빌딩명 : " << starTower.GetName() << endl;
	cout << "전체면적 : " << starTower.GetArea() << "평" << endl;
	cout << "전체층수 : " << starTower.GetMaxFloor() << "층" << endl;

	starTower.CheckFloor(-1);

	starTower.CheckAllFloor(); // inline 함수


	return 0;
}