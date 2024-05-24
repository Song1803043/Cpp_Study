#include <iostream>
#include <string>

// using namespace std;

// 기능의 확장으로 본 상속
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
        const char* ptr = c_str();   // 문자열이 저장된 메모리 주소값을 전달하는 string 클래스 멤버함수

        int count = 0;
        for (count = 0; ptr[count] != 0; count++);

        return count;
    }

};


int main()
{
    // string C++ 언어에서 기본적으로 제공해주는 클래스

    using namespace std;

    ExtString str((char*)"monster");

    cout << "str  문자열의 갯수는 : " << str.GetLength() << endl;

    cout << str << endl;

    string str2 = "I am a boy!!";
    ExtString extStr(str2);

    cout << "extStr 문자열의 문자열의 갯수는 : " << extStr.GetLength() << endl;

    ExtString str3 = str + extStr;

    cout << "str3 문자열의 갯수는 : " << str3.GetLength() << endl;
    cout << str3 << endl;


    return 0;
}