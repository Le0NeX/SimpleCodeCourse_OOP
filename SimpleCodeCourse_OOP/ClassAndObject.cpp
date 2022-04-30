//Lesson: Class and object classe

#include "ClassAndObject.h"
#include "stdafx.h"

class Human
{
public:
	string name = {};
	int age = 0;
	int weight = 0;
};

class Point
{
public:
	int x = 0;
	int y = 0;
	int z = 0;

};

void LaunchClassAndObject()
{
	Human firstHuman;
	firstHuman.name = "Ilya";
	firstHuman.age = 32;
	firstHuman.weight = 100;

	cout << firstHuman.name << endl;
	cout << firstHuman.age << endl;
	cout << firstHuman.weight << endl;

	cout << "___________________________" << endl;

	Human secondHuman;
	secondHuman.name = "Vova";
	secondHuman.age = 28;
	secondHuman.weight = 65;

	cout << secondHuman.name << endl;
	cout << secondHuman.age << endl;
	cout << secondHuman.weight << endl;

	Point point;
	point.x = 4;
	point.y = 6;
	point.z = 10;
}