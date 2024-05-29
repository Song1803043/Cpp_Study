#include <iostream>

using namespace std;

// UpCasting 상속관계에서 부모의 데이터 타입으로 자식을 받는것

// 순수 가상함수를 하나라도 가지고 있는 클래스를 추상클래스라고 합니다.
// 추상클래스는 자신의 객체를 만들 수 없습니다.
// 하지만 자신에게서 상속받은 자식클래스에게 자신의 순수 가상함수를
// 구현하게 강제하는 능력이 생깁니다.

class Drink
{
private:
	string _name;

public:
	Drink()
		: _name("음료") {}

	virtual string GetName()
	{
		return _name;
	}

	virtual void MakeADrink() = 0; // 순수 가상 함수
};

class Americano : public Drink
{
private:
	string _name;

public:
	Americano()
		: _name("아메리카노") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
		: _name("라떼") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
		: _name("카라멜 마끼아또") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
		: _name("에이드") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Banilla : public Drink
{
private:
	string _name;

public:
	Banilla()
		: _name("바닐라 라떼") {}

	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
	{
		cout << _name << "를 만듭니다." << endl;
	}
};

class Lemontee : public Drink
{
private:
	string _name;
	
public:
	Lemontee()
		: _name("레몬티") {}
	
	string GetName()
	{
		return _name;
	}

	void MakeADrink() override
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
	//Drink drink; // 추상클래스의 객체는 만들 수 없습니다.

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