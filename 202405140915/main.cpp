#include <iostream>
#include <string>

using namespace std;

// 클래스를 만들때 생성자 반드시 필요한 경우가 있습니다.
// 멤버중에 상수형멤버나 참조형멤버가 있는 경우에 반드시 생성자 만들어야합니다.


class Student
{
private:
	string _name;
	int _grade;
	int _classNum;

	const int MAXSTUDENTCOUNT; // 전체 학생수 (상수형 멤버변수)
	int& _specialClassNum; // 특활반 (참조형 멤버변수)

public:
	// 생성자의 중괄호 블럭안에서 대입 연산자로 멤버변수를 초기화 하는것은
	// 객체의 메모리 할당이 끝나고 대입연산을 통해서 멤버변수에 값을 초기화하는 것입니다.
	// 상수형멤버변수나 참조형멤버변수는 메모리가 할당됨가 동시에 값이 초기화 되어야 되기 때문에
	// 생성자의 중괄호 블럭안에서 초기화 할 수 없습니다.
	// 멤버변수의 값을 생성자 초기화 리스트를 통해서 초기화 하는 경우에는
	// 객체의 메모리 할당이 됨과 동시에 초기화 작업이 진행됩니다.
	// 상수형멤버변수나 참조형멤버변수는 생성자 초기화 리스트로 초기화를 해야합니다.
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
		cout << "이름 : " << _name << endl;
		cout << "학년 : " << _grade << endl;
		cout << "반 : " << _classNum << endl;
		cout << "총학생수 : " << MAXSTUDENTCOUNT << endl;
		cout << "특활반 : " << _specialClassNum << endl;
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