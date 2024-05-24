#include <iostream>
#include <string>

// using namespace std;

// ����� Ȯ������ �� ���
class ExtString : public std::string
{
public:
    ExtString() {}
    ExtString(char* pstr)
        : std::string(pstr) {}
    ExtString(std::string str)
        : std::string(str) {}

    int GetLength()
    {
        const char* ptr = c_str();   // ���ڿ��� ����� �޸� �ּҰ��� �����ϴ� string Ŭ���� ����Լ�

        int count = 0;
        for (count = 0; ptr[count] != 0; count++);

        return count;
    }

};


int main()
{
    // string C++ ���� �⺻������ �������ִ� Ŭ����

    using namespace std;

    ExtString str((char*)"monster");

    cout << "str  ���ڿ��� ������ : " << str.GetLength() << endl;

    cout << str << endl;

    string str2 = "I am a boy!!";
    ExtString extStr(str2);

    cout << "extStr ���ڿ��� ���ڿ��� ������ : " << extStr.GetLength() << endl;

    ExtString str3 = str + extStr;

    cout << "str3 ���ڿ��� ������ : " << str3.GetLength() << endl;
    cout << str3 << endl;


    return 0;
}