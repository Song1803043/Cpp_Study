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

	string GetName()
	{
		return _name;
	}

	DrinkType GetType()
	{
		return _type;
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
};

class Barista
{
public:
	void MakeADrink(Drink& drink) // �θ� ������ Ÿ������ ����
	{
		// DownCasting
		// �ڽ��� ������ ���� �� �ִ� ��ü�� �ڷ�����
		// �θ�� ��ȯ�Ǿ� �ִ� ��(��ĳ���õ� ��ü)�� 
		// �ٽ� �ڽ��� �ڷ������� �ǵ����� ��
		switch (drink.GetType())
		{
		case AMERICANO:
			cout << ((Americano&)drink).GetName() << "�� ����ϴ�." << endl;
			break; // �ڽ��� ������Ÿ������ DownCasting

		case LATTE:
			cout << ((Latte&)drink).GetName() << "�� ����ϴ�." << endl;
			break; // �ڽ��� ������Ÿ������ DownCasting

		case CARAMEL:
			cout << ((Caramel&)drink).GetName() << "�� ����ϴ�." << endl;
			break; // �ڽ��� ������Ÿ������ DownCasting

		case ADE:
			cout << ((Ade&)drink).GetName() << "�� ����ϴ�." << endl;
			break; // �ڽ��� ������Ÿ������ DownCasting
		}
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