#include <iostream>

using namespace std;

// UpCasting ��Ӱ��迡�� �θ��� ������ Ÿ������ �ڽ��� �޴°�

enum DrinkType
{
	AMERICANO,
	LATTE,
	CARAMEL,
	ADE
};

class Drink
{
private:
	string _name;
	DrinkType _type;

public:
	Drink(DrinkType type)
		: _name("����"), _type(type) {}

	virtual string GetName()
	{
		return _name;
	}

	DrinkType GetType()
	{
		return _type;
	}

	virtual void MakeADrink()
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Americano : public Drink
{
private:
	string _name;

public:
	Americano()
		: _name("�Ƹ޸�ī��"), Drink(AMERICANO) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Latte : public Drink
{
private:
	string _name;

public:
	Latte()
		: _name("��"), Drink(LATTE) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Caramel : public Drink
{
private:
	string _name;

public:
	Caramel()
		: _name("ī��� �����ƶ�"), Drink(CARAMEL) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Ade : public Drink
{
private:
	string _name;

public:
	Ade()
		: _name("���̵�"), Drink(ADE) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Barista
{
public:
	void MakeADrink(Drink& drink) // �θ� ������ Ÿ������ ����
	{
		drink.MakeADrink();

		/*
		switch (drink.GetType())
		{
		case AMERICANO:
			((Americano&) drink).MakeAdrink();
			break;

		case LATTE:
			((Latte&) drink).MakeAdrink();
			break;

		case CARAMEL:
			((Caramel& )drink).MakeAdrink();
			break;

		case ADE:
			((Ade&) drink).MakeAdrink();
			break;
		}
		*/
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