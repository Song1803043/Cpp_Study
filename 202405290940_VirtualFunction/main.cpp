#include <iostream>

using namespace std;

class Parent
{
public:
	void Print() // �Ϲݸ���Լ�
	{
		cout << "Parent::Print()" << endl;
	}

	virtual void VPrint1() // �����Լ�
	{
		cout << "Parent::VPrint()" << endl;
	}
	
	virtual void VPrint2() // �����Լ�
	{
		cout << "Parent::VPrint2()" << endl;
	}

	virtual void VPrint3() // �����Լ�
	{
		cout << "Parent::VPrint3()" << endl;
	}
};

class Child1 : public Parent
{
public:
	void Print()
	{
		cout << "Child1::Print()" << endl;
	}

	void VPrint1() override // �θ��� �Լ��� ������
	{
		cout << "Child1::VPrint1()" << endl;
	}
};

class Child2 : public Parent
{
public:
	void Print()
	{
		cout << "Child2::Print()" << endl;
	}

	void VPrint2() override
	{
		cout << "Child2::VPrint2()" << endl;
	}
};

class Child3 : public Parent
{
public:
	void Print()
	{
		cout << "Child3::Print()" << endl;
	}

	void VPrint3() override
	{
		cout << "Child3::VPrint3()" << endl;
	}
};

// �Ϲݸ���Լ� ȣ��
void FuncPrint(Parent& ref)
{
	ref.Print();
	ref.Parent::Print(); // �������ε� (�̸� ���ε�)
						 // ���������� ��������� � ����Լ��� ȣ�����
						 // �����Ǿ����� ���� ���� ���ε��̶�� ��
}

void FuncPrint(Child1& ref)
{
	ref.Print();
	ref.Child1::Print();
}

void FuncPrint(Child3& ref)
{
	ref.Print();
	ref.Parent::Print();
}

// �����Լ� ȣ��
void FuncVPrint1(Parent& ref)
{
	ref.VPrint1();
	// ���� ���ε�
	// ���� �߿� � ����Լ��� ȣ����� �����Ǵ� ���� ���� ���ε�
}

void FuncVPrint2(Parent& ref)
{
	ref.VPrint2();
}

void FuncVPrint3(Parent& ref)
{
	ref.VPrint3();
}

int main()
{
	Parent parent;
	Child1 child1;
	Child2 child2;
	Child3 child3;

	// �Ϲݸ���Լ�ȣ��
	cout << "�Ϲݸ���Լ� Call FuncPrint" << endl;
	FuncPrint(parent);
	FuncPrint(child1);
	FuncPrint(child2);
	FuncPrint(child3);
	cout << endl;
	cout << endl;

	// �������Լ� ȣ��
	cout << "�������Լ� Call FuncVPrint1" << endl;
	FuncVPrint1(parent);
	FuncVPrint1(child1);
	FuncVPrint1(child2);
	FuncVPrint1(child3);
	cout << endl;
	cout << endl;

	cout << "�������Լ� Call FuncVPrint2" << endl;
	FuncVPrint2(parent);
	FuncVPrint2(child1);
	FuncVPrint2(child2);
	FuncVPrint2(child3);
	cout << endl;
	cout << endl;

	cout << "�������Լ� Call FuncVPrint3" << endl;
	FuncVPrint3(parent);
	FuncVPrint3(child1);
	FuncVPrint3(child2);
	FuncVPrint3(child3);



	return 0;
}