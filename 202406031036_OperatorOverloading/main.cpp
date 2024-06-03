#include <iostream>

using namespace std;

class DynamicArray
{
private:
	int* _parr;
	int _size;

public:
	DynamicArray(int size)
		: _size(size)
	{
		cout << "인자를 받는 생성자" << endl;
		_parr = new int[_size];
	}

	~DynamicArray()
	{
		delete[] _parr;
	}

	DynamicArray& operator=(DynamicArray& right)
	{
		cout << "DynamicArray& operator=(DynamicArray&right)" << endl;
		delete[] _parr; // 기존의 동적메모리 공간을 반환 처리한다.

		_size = right._size;

		_parr = new int[_size]; // 인자로 들어온 right와 동일한 사이즈의 동적메모리
								// 공간을 할당받는다.

		// 인자로 들어온 right의 동적메모리 공간에 있는 값을 복사한다.
		for (int i = 0; i < _size; i++)
		{
			_parr[i] = right._parr[i];
		}

		return *this;
	}

	int GetIndex(int index)
	{
		return _parr[index];
	}
	
	void SetIndex(int index, int value)
	{
		_parr[index] = value;
	}

	int GetSize()
	{
		return _size;
	}
};

int main()
{
	DynamicArray array(20);
	DynamicArray array2(10);
	DynamicArray array3(30);

	cout << "array" << endl;
	for (int i = 0; i < array.GetSize(); i++)
	{
		array.SetIndex(i, i);
	}

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << "array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array3" << endl;
	for (int i = 0; i < array3.GetSize(); i++)
	{
		array3.SetIndex(i, i);
	}

	for (int i = 0; i < array3.GetSize(); i++)
	{
		cout << "array3[" << i << "] = " << array3.GetIndex(i) << endl;
	}

	array3 = array;
	cout << endl;
	cout << "array3 = array," << endl;
	for (int i = 0; i < array3.GetSize(); i++)
	{
		cout << "array3[" << i << "] = " << array3.GetIndex(i) << endl;
	}

	array3 = array;

	cout << "array" << endl;

	array.SetIndex(10, 40000);
	array3.SetIndex(10, 1000);

	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " array[" << i << "] = " << array.GetIndex(i) << endl;
	}

	cout << endl;
	cout << "array3" << endl;

	cout << endl;
	for (int i = 0; i < array3.GetSize(); i++)
	{
		cout << "array3[" << i << "] = " << array3.GetIndex(i) << endl;
	}

	return 0;
}