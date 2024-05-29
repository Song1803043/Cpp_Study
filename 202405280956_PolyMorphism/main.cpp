#include <iostream>

using namespace std;

// 커피숖 관리 프로그램을만들어달라는 요청을 받았습니다.
// 커피숖에 가야됩니다... 커피를 한잔 시키고
// 앉아서 커피숖의 업무 흐름을 파악
// 커피숖의 업무 흐름속에는 역활(role)과 역활에 따른 책임(responsibility)을 파악

// 커피숖안에는 어떤 역활이 있나요?
// Cashier, Barista, Guest
// Cashier 책임: 주문을 받고 계산하고 음료 제작 요청
// Barista 책임: 음료제작,
// Guest 책임: 음료주문, 돈 지불

// 포함, 참조, 의존적관계

class Coffee
{
private:
	bool _temp;

public:
	Coffee(bool temp)
		: _temp(temp) {}

	bool GetTemp()
	{
		if (GetTemp())
		{
			cout << "ice";
		}
		else
		{
			cout << "hot";
		}
	}
};

class Americano : public Coffee
{
private:
	string _name;

public:
	Americano(bool temp)
		: _name("아메리카노"), Coffee(temp) 
	{
		GetTemp();
	}

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
		: _name("라떼") {}

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
		: _name("카라멜 마끼아또") {}

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
		cout << drink.GetName() <<  "를 만듭니다." << endl;
	}

	void MakeADrink(Latte& drink)
	{
		cout << drink.GetName() << "를 만듭니다." << endl;
	}

	void MakeADrink(Caramel& drink)
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

	void OrderedDrink(Americano& drink)
	{
		cout << drink.GetName() << "를 주문 받습니다." << endl;
		_refBari.MakeADrink(drink);
	}

	void OrderedDrink(Latte& drink)
	{
		cout << drink.GetName() << "를 주문 받습니다." << endl;
		_refBari.MakeADrink(drink);
	}

	void OrderedDrink(Caramel& drink)
	{
		cout << drink.GetName() << "를 주문 받습니다." << endl;
		_refBari.MakeADrink(drink);
	}

};

class Guest
{
public:
	void OrderingDrink(Cashier& ref, Americano& drink) // 인자로받는 의존적 관계(dependency)
	{
		cout << drink.GetName() << "를 주문 합니다." << endl;
		ref.OrderedDrink(drink);
	}

	void OrderingDrink(Cashier& ref, Latte& drink) 
	{
		cout << drink.GetName() << "를 주문 합니다." << endl;
		ref.OrderedDrink(drink);
	}
	
	void OrderingDrink(Cashier& ref, Caramel& drink)
	{
		cout << drink.GetName() << "를 주문 합니다." << endl;
		ref.OrderedDrink(drink);
	}

};


int main()
{
	Americano americano(0);
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