#include "OperatorsOverload.h"
#include "stdafx.h"

//Lesson:#100. Operators overload

class OperatorsOverload
{
public:
	OperatorsOverload()
	{
		this->x = 0;
		this->y = 0;
	}
	OperatorsOverload(const int valueX, const int valueY)
	{
		this->x = valueX;
		this->y = valueY;
		cout << "X = " << this->x << "\nY = " << this->y << endl;
	}
	OperatorsOverload operator +(const OperatorsOverload& other)//Overloading the oddition operator
	{
		OperatorsOverload temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.x;
		return temp;
		}
	OperatorsOverload& operator ++()//Overloading the prefix operator
	{
		this->x++;
		this->y++;
		return *this;
	}
	OperatorsOverload& operator ++(int value)//Overloading the postfix operator
	{
		OperatorsOverload temp(*this);
		this->x++;
		this->y++;
		return temp;
	}
	OperatorsOverload& operator --()//Overloading the decriment prefix operator
	{
		this->x--;
		this->y--;
		return *this;
	}
	OperatorsOverload& operator --(int value)//Overloading the decriment postfix operator
	{
		OperatorsOverload temp(*this);
		this->x--;
		this->y--;
		return temp;
	}
	int & operator [](int index)
	{
		return OperatorsOverloadArray[index];
	}
private:
	int x;
	int y;
	int OperatorsOverloadArray[5] =  {1,2,3,4,5};
};

void LaunchOperatorsOverload()
{
	OperatorsOverload operatorsOverload;
	OperatorsOverload first(20, 40);
	OperatorsOverload second(60, 80);
	OperatorsOverload result = first + second;
	++first;
	first = second++;
	cout << operatorsOverload[1] << endl;

}