#include <iostream>

using namespace std;

// UpCasting 상속관계에서 부모의 데이터 타입으로 자식을 받는것

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
		: Drink("아메리카노") {}
};

class Latte : public Drink
{
public:
	Latte()
		: Drink("라떼") {}
};

class Caramel : public Drink
{
public:
	Caramel()
		: Drink("카라멜 마끼아또") {}
};

class Ade : public Drink
{
public:
	Ade()
		: Drink("에이드") {}
};

class Barista
{
public:
	void MakeADrink(Drink& drink)
	{
		cout << drink.GetName() << "를 만듭니다." << endl;
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