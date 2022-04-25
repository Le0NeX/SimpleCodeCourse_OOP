#include "FriendlyClasses.h"
#include "stdafx.h"

//Video: 103 - Friendly classes

class Apple;//Prototip class

class FriendlyClasses
{
public:
	FriendlyClasses()
	{
		this->x = 0;
		this->y = 0;
	}
	void Print()
	{
		cout << "x: " << x << "\ny: " << y << endl;
	}
private:
	int x;
	int y;
	friend void ChangeX(FriendlyClasses& value);//Prototips to friendly a functions
};

void ChangeX(FriendlyClasses& value)//Friendly function
{
	value.x = 10;
	value.y = 20;
}

class Human
{
public:
	void TakeApple(Apple& apple);
private:

};

class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight = 0;
	string color = "";
	friend void Human::TakeApple(Apple& apple);
};

void Human::TakeApple(Apple& apple)
{
	cout << "Runs TakeApple: " << "Color = " << apple.color << " weight = " << apple.weight << endl;
}

void LaunchFriendlyClasses()
{
	FriendlyClasses friendlyClasses;
	Apple apple(150,"Red");
	Human human;
	ChangeX(friendlyClasses);
	friendlyClasses.Print();
	human.TakeApple(apple);

}