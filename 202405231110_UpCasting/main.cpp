#include <iostream>
#include <string>

using namespace std;

// UpCasting, DownCasting
// UpCasting : 상속관계에서 부모의 데이터 타입으로 자식을 받는것
// 참조타입/ 포인터

class Parent
{
public:
    int _pvalue;

public:
    Parent()
        :_pvalue(0) {}

    Parent(int pvalue)
        : _pvalue(pvalue) {}

    void ShowInfo()
    {
        cout << "Parent::_pvalue = " << _pvalue << endl;
    }
};

class Child : public Parent
{
public:
    int _cvalue;

public:
    Child()
        : Parent(0), _cvalue(0) {}

    Child(int pvalue, int cvalue)
        : Parent(pvalue), _cvalue(cvalue) {}

    void ShowInfo()
    {
        cout << "Child::Parent::_pvalue = " << _pvalue << endl;
        cout << "Child::_cvalue = " << _cvalue << endl;
    }
};

int main()
{
    Parent parent(5);
    Child child(10, 20);

    parent.ShowInfo();
    cout << endl;
    parent = child;
    parent.ShowInfo();
    
    // child = parent;
    // 부모타입을 자식 타입에 대입할 수 없습니다.
    // 상속관계 있는 데이터 타입간에는
    // 부모의 데이터 타입에 자식의 데이터 타입을 할 수 있습니다.
    // 대입을 하게 되면 자식의 영역 부분이 유실이 되기 때문에
    // 그래서 객체는 참조타입, 포인터 타입으로 대입합니다.
    // 부모의 참조 타입이나 포인터 타입에 자식의 객체를 대입하는 것을 UpCasting:

    cout << endl;
    cout << "<참조타입으로 전달>" << endl;
    cout << "--UpCasting!" << endl;
    Parent& refp = child; // UpCasting
    refp.ShowInfo();

    
    // 부모의 타입을 자식의 타입에 대입하는 것을 다운캐스팅(DownCasting)
    // 다운캐스팅은 원천적으로 작동이 안됩니다.
    cout << "--DownCasting!" << endl;
    Child& refc = (Child&)refp; // 다운캐스팅(부모타입을 자식에 대입)
    refc.ShowInfo();

    cout << endl;
    cout << "<포인터타입으로 전달>" << endl;
    cout << "--UpCasting!" << endl;
    Parent* pparent = &child; // UpCasting
    pparent->ShowInfo();
   
    cout << "--DownCasting!" << endl;
    Child* pchild = (Child*)pparent; // DownCasting
    pchild->ShowInfo();


    return 0;
}