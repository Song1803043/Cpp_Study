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
		cout << "���ڸ� �޴� ������" << endl;
		_parr = new int[_size];
	}

	~DynamicArray()
	{
		delete[] _parr;
	}

	DynamicArray& operator=(DynamicArray& right)
	{
		cout << "DynamicArray& operator=(DynamicArray&right)" << endl;
		delete[] _parr; // ������ �����޸� ������ ��ȯ ó���Ѵ�.

		_size = right._size;

		_parr = new int[_size]; // ���ڷ� ���� right�� ������ �������� �����޸�
								// ������ �Ҵ�޴´�.

		// ���ڷ� ���� right�� �����޸� ������ �ִ� ���� �����Ѵ�.
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