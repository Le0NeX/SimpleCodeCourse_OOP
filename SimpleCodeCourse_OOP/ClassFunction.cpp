#include "ClassFunction.h"
#include "Default.h"

class Human
{
public:
	string name = {};
	int age = 0;
	int weight = 0;

	void Print()
	{
		cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << endl;
		cout << "_______________________" << endl;
	}
};

void LaunchClassFunction()
{
	Human firstHuman;
	firstHuman.name = "Ilya";
	firstHuman.age = 32;
	firstHuman.weight = 65;
	firstHuman.Print();//Launch a function Print, a class Human
	Human secondHuman;
	secondHuman.Print();//No value

}