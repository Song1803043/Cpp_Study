#include "Building.h"

// C++���� �»������� C����� ���� ������ ������� ������ �Ǿ
// �����(.h), ������(.cpp)�� ����� �����ϰ� �Ǿ��ֽ��ϴ�.
// Ŭ���� ����� ���ο��� ����Լ��� �����ϴ� ��쿡 �����Ϸ��� �����ο���  ������������
// �ٸ��� �޾Ƶ帳�ϴ�.
// inline�Լ��� �����޶�� ��û���� �޾Ƶ帳�ϴ�.

int main()
{
	Building starTower("��ŸŸ��", 112300.23f, 23);

	cout << "������ : " << starTower.GetName() << endl;
	cout << "��ü���� : " << starTower.GetArea() << "��" << endl;
	cout << "��ü���� : " << starTower.GetMaxFloor() << "��" << endl;

	starTower.CheckFloor(-1);

	starTower.CheckAllFloor(); // inline �Լ�


	return 0;
}