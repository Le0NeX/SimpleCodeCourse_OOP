#include "ClassAndObject.h"

//Lesson: Class and object classe
//class Human
//{
//public:
//	string name = {};
//	int age = 0;
//	int weight = 0;
//};
//
//class Point
//{
//public:
//	int x = 0;
//	int y = 0;
//	int z = 0;
//};

//Lesson: class and function
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

//Lesson: Nessted class
class Image
{
public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			cout << pixel[i].GetInfo() << endl;
		}

	}
private:
	class Pixel
	{
	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string GetInfo()
		{
			return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
		}
	private:
		int r = 0;
		int g = 0;
		int b = 0;
	};
	static const int LENGTH = 5;
	Pixel pixel[LENGTH] //Create array object
	{
		Pixel(0,4,7),
		Pixel(4,14,10),
		Pixel(111,4,24),
		Pixel(244,244,14),
		Pixel(111,179,64)
	};
};

//Lesson: 112 Array object a class
class ObjectArray
{
public:
	ObjectArray()
	{
		this->r = this->g = this->b = 0;
	}
	static const int LENGTH = 5;
private:
	int r;
	int g;
	int b;
	ObjectArray* objectArray = new ObjectArray[LENGTH];
};



void LaunchClassAndObject()
{
	Human firstHuman;
	firstHuman.name = "Ilya";
	firstHuman.age = 32;
	firstHuman.weight = 100;
	firstHuman.Print();//Launch a function Print, a class Human

	cout << "___________________________" << endl;

	Human secondHuman;
	secondHuman.name = "Vova";
	secondHuman.age = 28;
	secondHuman.weight = 65;
	secondHuman.Print();//No value

	//Point point;
	//point.x = 4;
	//point.y = 6;
	//point.z = 10;

	Image image;
	image.GetImageInfo();
}