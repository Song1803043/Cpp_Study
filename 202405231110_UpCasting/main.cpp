#include <iostream>
#include <string>

using namespace std;

// UpCasting, DownCasting
// UpCasting : ��Ӱ��迡�� �θ��� ������ Ÿ������ �ڽ��� �޴°�
// ����Ÿ��/ ������

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
    // �θ�Ÿ���� �ڽ� Ÿ�Կ� ������ �� �����ϴ�.
    // ��Ӱ��� �ִ� ������ Ÿ�԰�����
    // �θ��� ������ Ÿ�Կ� �ڽ��� ������ Ÿ���� �� �� �ֽ��ϴ�.
    // ������ �ϰ� �Ǹ� �ڽ��� ���� �κ��� ������ �Ǳ� ������
    // �׷��� ��ü�� ����Ÿ��, ������ Ÿ������ �����մϴ�.
    // �θ��� ���� Ÿ���̳� ������ Ÿ�Կ� �ڽ��� ��ü�� �����ϴ� ���� UpCasting:

    cout << endl;
    cout << "<����Ÿ������ ����>" << endl;
    cout << "--UpCasting!" << endl;
    Parent& refp = child; // UpCasting
    refp.ShowInfo();

    
    // �θ��� Ÿ���� �ڽ��� Ÿ�Կ� �����ϴ� ���� �ٿ�ĳ����(DownCasting)
    // �ٿ�ĳ������ ��õ������ �۵��� �ȵ˴ϴ�.
    cout << "--DownCasting!" << endl;
    Child& refc = (Child&)refp; // �ٿ�ĳ����(�θ�Ÿ���� �ڽĿ� ����)
    refc.ShowInfo();

    cout << endl;
    cout << "<������Ÿ������ ����>" << endl;
    cout << "--UpCasting!" << endl;
    Parent* pparent = &child; // UpCasting
    pparent->ShowInfo();
   
    cout << "--DownCasting!" << endl;
    Child* pchild = (Child*)pparent; // DownCasting
    pchild->ShowInfo();


    return 0;
}