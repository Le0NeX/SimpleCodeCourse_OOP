#include "Destryktor.h"
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

void Foo()
{
	cout << "Foo() start runs\n";
	MyClass myClassFirst(10);
	cout << "Foo() end runs\n";
}

//Lesson: 117. Destructor run order
class Destructor_A
{
public:
	Destructor_A()
	{
		cout << "Run constructor class A" << endl;
	}
	~Destructor_A()
	{
		cout << "Run destructor class A" << endl;
	}
};

class Destructor_B : public Destructor_A
{
public:
	Destructor_B()
	{
		cout << "Run constructor class B" << endl;
	}
	~Destructor_B()
	{
		cout << "Run destructor class B" << endl;
	}
};

class Destructor_C : public Destructor_B
{
public:
	Destructor_C()
	{
		cout << "Run constructor class C" << endl;
	}
	~Destructor_C()
	{
		cout << "Run destructor class C" << endl;
	}
};

//Lesson: 122. Virtual destruktor
class VirtualDestruktor_A
{
public:
	VirtualDestruktor_A()
	{
		cout << "Alocated dunamic memory, object a class <VirtualDestruktor_A>\n";
	}
	virtual ~VirtualDestruktor_A()
	{
		cout << "Dynamic memory cleared A!\n";
	}
};

class VirtualDestruktor_B : public VirtualDestruktor_A
{
public:
	VirtualDestruktor_B()
	{
		cout << "Alocated dynamic memory, object a class <VirtualDestructor_B>\n";
	}
	~VirtualDestruktor_B() override
	{
		cout << "Dynamic memory cleared B!\n";
	}
};
//Lesson: 123. Clear virtual function 
class ClearVirtualDestruktor_A
{
public:
	ClearVirtualDestruktor_A()
	{
		cout << "Launch class: <ClearVirtualDestruktor_A> constructor\n";
	}
	virtual ~ClearVirtualDestruktor_A()
	{
		cout << "Launch class: <ClearVirtualDestruktor_A> destructor\n";
	}
};
class ClearVirtualDestruktor_B : ClearVirtualDestruktor_A
{
public:
	ClearVirtualDestruktor_B()
	{
		cout << "Launch class: <ClearVirtualDestruktor_B> constructor\n";
	}
	~ClearVirtualDestruktor_B() override
	{
		cout << "Launch class: <ClearVirtualDestruktor_B> destructor\n";
	}
};

void LaunchDestryktor()
{
	//Foo();
	//MyClass myClassSecond(20);

	//Lesson: 117. Destructor run order
	//cout << "-------------------------" << endl;
	//Destructor_A destructor_a;
	//Destructor_B destructor_b;
	//Destructor_C destructor_c;

	//Lesson: 122. Virtual distruktor
	//VirtualDestruktor_B virtualDestruktor_b;
	//cout << "-------------------------" << endl;
	//VirtualDestruktor_B* virtualDestruktor_bb = new VirtualDestruktor_B;
	//virtualDestructor_bb = nullptr;
	//delete virtualDestructor_bb;
	//cout << "-------------------------" << endl;
	VirtualDestruktor_A* virtualDestruktor_a = new VirtualDestruktor_B;
	virtualDestruktor_a = nullptr;
	delete virtualDestruktor_a;

	//Lesson: 123. Clear virtual function 
	ClearVirtualDestruktor_B clearVirtualDestruktor_b;


}