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

	// ����Լ��� inline Ű���带 ���̸�
	// �ش��Լ��� inline �Լ��� �����޶�� ��û�� ��.
	// inline �Լ��� ����Ϸ��� ����ο� ���� �����Ǿ����
	inline void CheckAllFloor();
};

void Building::CheckAllFloor()
{
	cout << endl;
	cout << "������ ��� �ý����� üũ�մϴ�." << endl;

	for (int i = 0; i < _maxFloor; i++)
	{
		CheckFloor(i);
	}
}