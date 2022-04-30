#include "ClassConstructor.h"
#include "stdafx.h"

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
	}
};

//# Video: 092. Constructor overload

void LaunchClassConstructor()
{
	Point pointFirst(100);//Create first object class
	pointFirst.Print();

	Point pointSecond(77, 90);//Create second object class
	pointSecond.Print();

	Point pointThird(50, 70, true);//Create third object class
	pointThird.Print();
}