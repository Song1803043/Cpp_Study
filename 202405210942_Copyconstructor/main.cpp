#include <iostream>

using namespace std;

class DynamicArray
{
private:
	int* _parr;
	int _size;

public:
	DynamicArray(int size)
		:_size(size)
	{
		cout << "DynamicArray(int size) 생성자" << endl;
		_parr = new int[_size];
	}

	DynamicArray(DynamicArray& ref) // 복사 생성자: 자신의 타입을 인자로 받는 생성자
		:_size(ref._size)
	{
		cout << "DynamicArray 복사생성자" << endl;
		_parr = new int[_size];

		for (int i = 0; i < _size; i++)
		{
			_parr[i] = ref._parr[i];
		}
	}


	~DynamicArray() // 소멸자
	{
		cout << "~DynamicArray() 소멸자" << endl;
		delete[] _parr; // 동적배열 반납처리
	}

	void SetIndex(int index, int value)
	{
		_parr[index] = value;
	}

	int GetIndex(int index)
	{
		return _parr[index];
	}

	int GetSize()
	{
		return _size;
	}
};

int main()
{
	cout << "array 객체" << endl;
	DynamicArray array(10);

	for (int i = 0; i < array.GetSize(); i++)
	{
		array.SetIndex(i, i);
	}

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}
	cout << endl;

	cout << "array2 객체" << endl;
	DynamicArray array2(array);

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array2[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;

	for (int i = 0; i < array.GetSize(); i++)
	{
		array.SetIndex(i, i * 2);
	}

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array2[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array 객체" << endl;
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}



	return 0;
}