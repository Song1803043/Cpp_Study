#include <iostream>

using namespace std;

// UpCasting ��Ӱ��迡�� �θ��� ������ Ÿ������ �ڽ��� �޴°�

class Drink
{
private:
	string _name;

public:
	Drink(string name)
		: _name(name) {}
	
	string GetName()
	{
		return _name;
	}
};

class Americano : public Drink
{
public:
	Americano()
		: Drink("�Ƹ޸�ī��") {}
};

class Latte : public Drink
{
public:
	Latte()
		: Drink("��") {}
};

class Caramel : public Drink
{
public:
	Caramel()
		: Drink("ī��� �����ƶ�") {}
};

class Ade : public Drink
{
public:
	Ade()
		: Drink("���̵�") {}
};

class Barista
{
public:
	void MakeADrink(Drink& drink)
	{
		cout << drink.GetName() << "�� ����ϴ�." << endl;
	}
};

class Cashier
{
private:
	Barista& _refBari; // ����(agreggation)

public:
	Cashier(Barista& ref)
		: _refBari(ref) {}

	void OrderedDrink(Drink& drink)
	{
		cout << drink.GetName() << "�� �ֹ��޽��ϴ�." << endl;
		_refBari.MakeADrink(drink);
	}
};

class Guest
{
public:
	void OrderingDrink(Cashier& ref, Drink& drink) // ���ڷι޴� ������ ����(dependency)
	{
		cout << drink.GetName() << "�� �ֹ��մϴ�." << endl;
		ref.OrderedDrink(drink);
	}
};


int main()
{
	Americano americano;
	Latte latte;
	Caramel caramel;
	Ade ade;
	Barista bari;
	Cashier cashier(bari);
	Guest guest;

	guest.OrderingDrink(cashier, americano);
	cout << endl;
	guest.OrderingDrink(cashier, latte);
	cout << endl;
	guest.OrderingDrink(cashier, caramel);
	cout << endl;
	guest.OrderingDrink(cashier, ade);


	return 0;
}