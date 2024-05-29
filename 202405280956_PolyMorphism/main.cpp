#include <iostream>

using namespace std;

// Ŀ�Ǚ� ���� ���α׷��������޶�� ��û�� �޾ҽ��ϴ�.
// Ŀ�Ǚ��� ���ߵ˴ϴ�... Ŀ�Ǹ� ���� ��Ű��
// �ɾƼ� Ŀ�Ǚ��� ���� �帧�� �ľ�
// Ŀ�Ǚ��� ���� �帧�ӿ��� ��Ȱ(role)�� ��Ȱ�� ���� å��(responsibility)�� �ľ�

// Ŀ�Ǚ��ȿ��� � ��Ȱ�� �ֳ���?
// Cashier, Barista, Guest
// Cashier å��: �ֹ��� �ް� ����ϰ� ���� ���� ��û
// Barista å��: ��������,
// Guest å��: �����ֹ�, �� ����

// ����, ����, ����������

class Americano
{
private:
	string _name;

public:
	Americano()
		: _name("�Ƹ޸�ī��") {}
	
	string GetName()
	{
		return _name;
	}

};

class Latte
{
private:
	string _name;

public:
	Latte()
		: _name("��") {}

	string GetName()
	{
		return _name;
	}
};

class Caramel
{
private:
	string _name;

public:
	Caramel()
		: _name("ī��� �����ƶ�") {}

	string GetName()
	{
		return _name;
	}
};

class Barista
{
public:

	void MakeADrink(Americano& drink)
	{
		cout << drink.GetName() <<  "�� ����ϴ�." << endl;
	}

	void MakeADrink(Latte& drink)
	{
		cout << drink.GetName() << "�� ����ϴ�." << endl;
	}

	void MakeADrink(Caramel& drink)
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

	void OrderedDrink(Americano& drink)
	{
		cout << drink.GetName() << "�� �ֹ� �޽��ϴ�." << endl;
		_refBari.MakeADrink(drink);
	}

	void OrderedDrink(Latte& drink)
	{
		cout << drink.GetName() << "�� �ֹ� �޽��ϴ�." << endl;
		_refBari.MakeADrink(drink);
	}

	void OrderedDrink(Caramel& drink)
	{
		cout << drink.GetName() << "�� �ֹ� �޽��ϴ�." << endl;
		_refBari.MakeADrink(drink);
	}

};

class Guest
{
public:
	void OrderingDrink(Cashier& ref, Americano& drink) // ���ڷι޴� ������ ����(dependency)
	{
		cout << drink.GetName() << "�� �ֹ� �մϴ�." << endl;
		ref.OrderedDrink(drink);
	}

	void OrderingDrink(Cashier& ref, Latte& drink) 
	{
		cout << drink.GetName() << "�� �ֹ� �մϴ�." << endl;
		ref.OrderedDrink(drink);
	}
	
	void OrderingDrink(Cashier& ref, Caramel& drink)
	{
		cout << drink.GetName() << "�� �ֹ� �մϴ�." << endl;
		ref.OrderedDrink(drink);
	}

};


int main()
{
	Americano americano;
	Latte latte;
	Caramel caramel;
	Barista bari;
	Cashier cashier(bari);
	Guest guest;

	guest.OrderingDrink(cashier, americano);
	cout << endl;
	guest.OrderingDrink(cashier, latte);
	cout << endl;
	guest.OrderingDrink(cashier, caramel);

	return 0;
}