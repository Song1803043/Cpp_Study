#include <iostream>
#include <string>

using namespace std;

// Ŭ������ ���鶧 ������ �ݵ�� �ʿ��� ��찡 �ֽ��ϴ�.
// ����߿� ���������� ����������� �ִ� ��쿡 �ݵ�� ������ �������մϴ�.


class Student
{
private:
	string _name;
	int _grade;
	int _classNum;

	const int MAXSTUDENTCOUNT; // ��ü �л��� (����� �������)
	int& _specialClassNum; // ƯȰ�� (������ �������)

public:
	// �������� �߰�ȣ ���ȿ��� ���� �����ڷ� ��������� �ʱ�ȭ �ϴ°���
	// ��ü�� �޸� �Ҵ��� ������ ���Կ����� ���ؼ� ��������� ���� �ʱ�ȭ�ϴ� ���Դϴ�.
	// �������������� ��������������� �޸𸮰� �Ҵ�ʰ� ���ÿ� ���� �ʱ�ȭ �Ǿ�� �Ǳ� ������
	// �������� �߰�ȣ ���ȿ��� �ʱ�ȭ �� �� �����ϴ�.
	// ��������� ���� ������ �ʱ�ȭ ����Ʈ�� ���ؼ� �ʱ�ȭ �ϴ� ��쿡��
	// ��ü�� �޸� �Ҵ��� �ʰ� ���ÿ� �ʱ�ȭ �۾��� ����˴ϴ�.
	// �������������� ��������������� ������ �ʱ�ȭ ����Ʈ�� �ʱ�ȭ�� �ؾ��մϴ�.
	Student(int MAX, int& specailClassNum)
		:MAXSTUDENTCOUNT(MAX), _specialClassNum(specailClassNum)
	{
		/*MAXSTUDENTCOUNT = MAX;
		_specialClassNum = specialClassNum;*/
	}

	Student(string name, int grade, int clasNum, int MAX, int& specialNum)
		:_name(name), _grade(grade), _classNum(clasNum), MAXSTUDENTCOUNT(MAX), _specialClassNum(specialNum)
	{

	}

	void info()
	{
		cout << "�̸� : " << _name << endl;
		cout << "�г� : " << _grade << endl;
		cout << "�� : " << _classNum << endl;
		cout << "���л��� : " << MAXSTUDENTCOUNT << endl;
		cout << "ƯȰ�� : " << _specialClassNum << endl;
	}
};

int main()
{
	int specialStudentNum = 11;

	Student st("Monster", 3, 4, 200, specialStudentNum);
	st.info();

	cout << endl;
	specialStudentNum = 30;

	st.info();



	return 0;
}