#include <iostream>
#include <string>

using namespace std;

class Fruit
{
private:
	string _name; // 과일명
	float _weight; // 무게
	float _brixDegree; // 당도

public:
	Fruit(string name, float weight, float brixdegree)
		:_name(name), _weight(weight), _brixDegree(brixdegree){}

	string GetName()
	{
		return _name;
	}

	void SetName(string value)
	{
		_name = value;
	}

	float GetBrixDegree()
	{
		return _brixDegree;
	}

	float GetWeight()
	{
		return _weight;
	}

	void Info()
	{
		cout << "과일명 : " << _name << endl;
		cout << "무게 : " << _weight << "g" << endl;
		cout << "당도 : " << _brixDegree << "%" << endl;
		cout << endl;
	}
};

void PrintFruit(Fruit& ref)
{
	cout << "과일명 : " << ref.GetName() << endl;
	cout << "무게 : " << ref.GetWeight() << "g" << endl;
	cout << "당도 : " << ref.GetBrixDegree() << "%" << endl;
	cout << endl;
}


int main()
{
	Fruit fruitArray[3] =
	{
		{"바나나", 0.3f, 80.0f},
		{"사과", 0.8f, 83.0f},
		{"딸기", 0.2f, 78.0f}
	};

	int length = sizeof(fruitArray) / sizeof(Fruit);

	for (int i = 0; i < length; i++)
	{
		PrintFruit(fruitArray[i]);
	}




	return 0;
}