#include "Destryktor.h"
#include "stdafx.h"

//Lesson: Destryctor

class MyClass
{
private:
	int data = 0;
	int* array = 0;

public:
	MyClass(int size)//Constryctor
	{
		array = new int[size];
		for (int i = 0;i < size;i++)
		{
			int RandomNumber = rand() % 10;
			cout << RandomNumber << endl;
			array[i] = RandomNumber;
		}

		cout << "Runs constrycotor!\t" << "value: " << data << endl;
	}
	~MyClass()//Destryctor
	{
		delete[] array;//Clears memory array
		cout << "Runs destryctor!\t" << data << endl;
	}
};

void LaunchDestryktor()
{
	Foo();
	MyClass myClassSecond(20);
}

void Foo()
{
	cout << "Foo() start runs\n";
	MyClass myClassFirst(10);
	cout << "Foo() end runs\n";
}