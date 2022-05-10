#include "Constructor.h"

//# Video: 091. Constructor a class is from constructor parameter default

class Point
{
private:
	int x = 0;
	int y = 0;
	bool value = false;
public:
	Point(int valueX)//Constructor overload
	{
		x = valueX;
		y = 20;
	}
	Point(int valueX, int valueY)//Constructor overload
	{
		x = valueX;
		y = valueY;
	}
	Point(int valueX, int valueY, bool valueB)//Constructor overload
	{
		x = valueX;
		y = valueY;
		value = valueB;
	}
	void Print()
	{
		cout << "x: " << x << "\ny: " << y << "\nBool: " << value << endl;
		cout << "-----------------------------------------------" << endl;
	}
};

//Lesson: 116. //Constructor run order.

class Constructor_A
{
public:
	Constructor_A()
	{
		cout << "Runs constructor class A" << endl;
	}
private:

};

class Constructor_B : public Constructor_A
{
public:
	Constructor_B()
	{
		cout << "Runs constructor class B" << endl;
	}
private:

};

class Constructor_C : public Constructor_B
{
public:
	Constructor_C()
	{
		cout << "Runs constructor class C" << endl;
	}
private:

};

//Lesson: 118. Run constructor basic a class
class RunBasicConstructor_A
{
public:
	RunBasicConstructor_A()
	{
		this->message = "Hi";
	}
	RunBasicConstructor_A(string message)
	{
		this->message = message;
	}
	void PrintMessage()
	{
		cout << "Message variable: " << message << endl;
	}
private:
	string message;
};

class RunBasicConstructor_B : public RunBasicConstructor_A
{
public:
	RunBasicConstructor_B() : RunBasicConstructor_A("New message") //Pointer on the constructor class RunBasicConstructor_A
	{
			
	}

};
//Lesson: 124. Delegatin constructor.

class DelegatinConstructor
{
public:
	DelegatinConstructor(string Name)
	{
		this->Name = Name + "!";
		this->Age = 0;
		this->Weight = 0;
	}
	DelegatinConstructor(string Name, int Age) : DelegatinConstructor(Name) //Delegatin constructor.
	{
		//this->Name = Name;
		this->Age = Age;
		//this->Weight = 0;
	}
	DelegatinConstructor(string Name, int Age, int Weight) : DelegatinConstructor(Name, Age)//Delegatin constructor.
	{
		//this->Name = Name;
		//this->Age = Age;
		this->Weight = Weight;
	}
	void Print()
	{
		cout << "Name: " << this->Name << ", Age: " << this->Age << ", Weight: " << this->Weight << endl;
	}
private:
	string Name;
	int Age;
	int Weight;
};

void LaunchConstructor()
{
	Point pointFirst(100);//Create first object class
	pointFirst.Print();

	Point pointSecond(77, 90);//Create second object class
	pointSecond.Print();

	Point pointThird(50, 70, true);//Create third object class
	pointThird.Print();

	//Lesson: 116. //Constructor run order.
	Constructor_A constructor_a;
	Constructor_B constructor_b;
	Constructor_C constructor_c;

	//Lesson: 118. Run constructor basic a class
	RunBasicConstructor_A runBasicConstructor_a;
	//RunBasicConstructor_A runBasicConstructor_a("Hello");
	RunBasicConstructor_B runBasicConstructor_b;
	runBasicConstructor_b.PrintMessage();

	//Lesson: 124. Delegatin constructor.
	//DelegatinConstructor delegatinConstructor("Ilya", 33);
	DelegatinConstructor delegatinConstructor("Ilya", 33, 65);
	delegatinConstructor.Print();



}