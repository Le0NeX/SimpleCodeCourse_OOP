#include "CopyConstructor.h"
#include "stdafx.h"

//Lesson: 095. Constructor copy.

class CopyConstructor
{
private:
	int* data = 0; //Created a pointer on the cell in memory
	int Size = 0;
public:
	CopyConstructor(int size)
	{
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = rand() % 10;
		}
		cout << "Runs constructor: " << this << endl;
	}
	CopyConstructor(const CopyConstructor &other)
	{
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << "Runs constructor copy. " << this << endl;
	}
	~CopyConstructor()
	{
		delete[] data;
		cout << "Runs destructor:  " << this << endl;
	}
};

void Foo(CopyConstructor value)
{
	cout << "Runs function Foo()" <<  endl;
}

CopyConstructor Foo2()
{
	cout << "Runs function Foo2()" << endl;
	CopyConstructor temp(2);
	return temp;
}

void LaunchCopyConstructor()
{
	CopyConstructor copyConstructor(10);
	Foo(copyConstructor);
	Foo2();
}