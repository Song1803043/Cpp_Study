#include <iostream>

using namespace std;

// UpCasting ��Ӱ��迡�� �θ��� ������ Ÿ������ �ڽ��� �޴°�

// ���� �����Լ��� �ϳ��� ������ �ִ� Ŭ������ �߻�Ŭ������� �մϴ�.
// �߻�Ŭ������ �ڽ��� ��ü�� ���� �� �����ϴ�.
// ������ �ڽſ��Լ� ��ӹ��� �ڽ�Ŭ�������� �ڽ��� ���� �����Լ���
// �����ϰ� �����ϴ� �ɷ��� ����ϴ�.

class Drink
{
private:
	string _name;

public:
	Drink()
		: _name("����") {}

	virtual string GetName()
	{
		return _name;
	}

	virtual void MakeADrink() = 0; // ���� ���� �Լ�
};

class Americano : public Drink
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

	void MakeADrink() override
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
		: _name("��") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
		: _name("ī��� �����ƶ�") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
		: _name("���̵�") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Banilla : public Drink
{
private:
	string _name;

public:
	Banilla()
		: _name("�ٴҶ� ��") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
	{
		cout << _name << "�� ����ϴ�." << endl;
	}
};

class Lemontee : public Drink
{
private:
	string _name;
	
public:
	Lemontee()
		: _name("����Ƽ") {}
	
	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
	//Drink drink; // �߻�Ŭ������ ��ü�� ���� �� �����ϴ�.

	Americano americano;
	Latte latte;
	Caramel caramel;
	Ade ade;
	Banilla banilla;
	Lemontee lemontee;

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
	cout << endl;
	guest.OrderingDrink(cashier, banilla);
	cout << endl;
	guest.OrderingDrink(cashier, lemontee);

	return 0;
}