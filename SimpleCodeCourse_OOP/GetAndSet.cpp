#include "GetAndSet.h"
#include "stdafx.h"


//Getters and setters, incapsulation
class Point
{
private:
	int x = 0;
	int y = 0;
	int z = 0;
public:
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	int GetZ()
	{
		return z;
	}
	void SetX(int valueX) //Function adds value variable: x.
	{
		x = valueX;
	}
	void SetY(int valueY)
	{
		y = valueY;
	}
	void SetZ(int valueZ)
	{
		z = valueZ;
	}
	void Print() //Function outputs value variable: x, after runs function SetX.
	{
		cout << "x = " << x << "\ny = " << y << endl;
	}
};

class CoffeeGrinder
{
private:
	bool CheckVoltage()
	{
		return true;
	}

public:
	bool voltageIsNormal = CheckVoltage();
	void start()
	{
		if (voltageIsNormal)
		{
			cout << "Launch coffee grinder!\n";
		}
		else
		{
			cout << "No launch coffee frinder!\n";
		}
	}

};
void LaunchGetAndSet()
{
	Point point;//Create object
	point.Print();//Output function Point
	int GetXresult = point.GetX();
	point.SetX(12);
	int GetXresultTwo = point.GetX();
	cout << "GetXresult = " << GetXresult << endl;
	cout << "GetXresultTwo = " << GetXresultTwo << endl;
	/*---------------------------------------------------*/
	CoffeeGrinder coffeeGrinder;
	coffeeGrinder.start();//Launch coffee grinder!
}