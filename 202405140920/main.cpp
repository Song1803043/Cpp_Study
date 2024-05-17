#include <iostream>

using namespace std;
// â���� ����
// ����� ����

int main()
{
	100;	// ���(constant)
	200;

	int sum = 100 + 200;

	// ������ ������� �絵�� �� �� �ֽ��ϴ�.
	// ������ ���鶧 ������ ���� �տ� const Ű���带 ����ϸ�
	// ������ ������� ��� �˴ϴ�.
	// ����� ������ ����� ���ÿ� ���� �ʱ�ȭ �ؾ��մϴ�.
	const int MAX = 200; // O
	
	// const int MAX2; X ����� �������� �����ϰ� �ִ� ���� ������ �� ����
	// MAX2 = 400;		X

	// ������ ����
	int a = 1000;
	int b = 2000;

	
	// ������ ������ ������ ����� ���ÿ� ����� �մϴ�.
	// a������ ��Ī�� refa�� ���������.
	int& refa = a;	// ������ ���� refa�� �������.

	cout << "before refa = " << refa << endl;
	cout << "before a = " << a << endl;
	cout << endl;

	refa = 800;
	
	cout << "after refa = " << refa << endl;
	cout << "after a = " << a << endl;
	cout << endl;
	cout << "�������� ����" << endl;
	// ������������
	int* pa;	// int�� ���� �����ϰ� �ִ� ������ �ּҰ��� �����ϴ� ���� pa

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

	// ������������ �������������� �������� �۵� ����� �����ϳ�
	// ������������ �ʱⰪ���� ���޵� ������ �ּҰ��� ������ �� �����ϴ�.
	// ���������� �����Ҷ� ���޵� ������ �޸� ������ ����Ű�� �˴ϴ�.


	return 0;
}