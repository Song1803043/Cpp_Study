#include <iostream>

using namespace std;

// UpCasting 상속관계에서 부모의 데이터 타입으로 자식을 받는것

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
		: _name("음료"), _type(type) {}

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
		cout << _name << "를 만듭니다." << endl;
	}
};

class Americano : public Drink
{
private:
	string _name;

public:
	Americano()
		: _name("아메리카노"), Drink(AMERICANO) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Latte : public Drink
{
private:
	string _name;

public:
	Latte()
		: _name("라떼"), Drink(LATTE) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Caramel : public Drink
{
private:
	string _name;

public:
	Caramel()
		: _name("카라멜 마끼아또"), Drink(CARAMEL) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Ade : public Drink
{
private:
	string _name;

public:
	Ade()
		: _name("에이드"), Drink(ADE) {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink()
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Barista
{
public:
	void MakeADrink(Drink& drink) // 부모 데이터 타입으로 받음
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
	Barista& _refBari; // 참조(agreggation)

public:
	Cashier(Barista& ref)
		: _refBari(ref) {}

	void OrderedDrink(Drink& drink)
	{
		cout << drink.GetName() << "를 주문받습니다." << endl;
		_refBari.MakeADrink(drink);
	}
};

class Guest
{
public:
	void OrderingDrink(Cashier& ref, Drink& drink) // 인자로받는 의존적 관계(dependency)
	{
		cout << drink.GetName() << "를 주문합니다." << endl;
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