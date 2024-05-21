#include <iostream>

using namespace std;

// 변수 => 메모리공간

int global = 0; // 외부변수, 전역변수


// 접근범위, 존속기간
void func(int c) {   // 매개변수: 로컬변수, 자동변수
    int a = 20; // 로컬변수, 자동변수

    static int astetic = 20;   // 정적변수, 로컬변수



}

class A {
private:
    int _member;   // 멤버변수
};


int main() {

    int b = 20; // 로컬변수(지역변수), 자동변수

    {
        int b = 30;
        int c = 100;




        b = 100;


    }
    c = 200;



    return 0;
}