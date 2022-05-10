#include "Inheritance.h"
//Lesson: 126. Multiple Inheritanse.
//Lesson: 127. Constructor call order in multiple inheritanse
class Car
{
public:
	Car()
	{
		cout << "Constructor class <Car> call\n";
	}
	~Car()
	{
		cout << "Destructor class <Car> call\n";
	}
	string str = "Field the class a car";
	void Drive()
	{
		cout << "I'm going\n";
	}
	void use()
	{
		cout << "Run method <use()> class <Car>\n";
	}
};

class Airplain
{
public:
	Airplain()
	{
		cout<<"Constructor class <Airplain> call\n";
	}
	~Airplain()
	{
		cout << "Destructor class <Airplain> call\n>";
	}
	string str2 = "Field the class a airplain";
	void Fly()
	{
		cout << "I'm fly!\n";
	}
	void use()
	{
		cout << "Run method <use()> class <Airplain>\n";
	}
};

class FlyingCar : public Car, public Airplain //Multiple Inheritanse.
{
public:
	FlyingCar()
	{
		cout << "Constructor class <FlyinCar> call\n";
	}
	~FlyingCar()
	{
		cout << "Destructor class <FlyingCar> call\n";
	}
};
//Lesson:130. Myltiple inheritanse in the same methods

void LaunchInheritance()
{
	//Lesson: 126. Multiple Inheritanse.
	//Airplain airplain;
	//FlyingCar flyingCar;
	//flyingCar.Drive();
	//flyingCar.Fly();
	//flyingCar.str;
	//flyingCar.str2;
	//Car *carPointer = &flyingCar;
//Lesson:127. Constructor call order in multiple inheritanse 
	//FlyingCar flyingCar;//Constructor call order

//Lesson 128. Destructor call order in multiple inheritanse
	//FlyingCar flyingCar;

//Lesson:130. Myltiple inheritanse in the same methods
	FlyingCar flyingCar;
	((Airplain)flyingCar).use();//The pointer on the methot concrete a class
	(Car(flyingCar)).use();
}