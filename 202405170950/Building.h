#include <string>
#include <iostream>

using namespace std;

class Building
{
private:
	string _name;
	float _area;
	int _maxFloor;

public:
	Building(string name, float area, int maxFloor);

	string GetName();

	float GetArea();

	int GetMaxFloor();

	void CheckFloor(int floor);

	// 멤버함수에 inline 키워드를 붙이면
	// 해당함수를 inline 함수로 만들어달라고 요청을 함.
	// inline 함수를 사용하려면 선언부에 같이 구현되어야함
	inline void CheckAllFloor();
};

void Building::CheckAllFloor()
{
	cout << endl;
	cout << "빌딩의 모든 시스템을 체크합니다." << endl;

	for (int i = 0; i < _maxFloor; i++)
	{
		CheckFloor(i);
	}
}