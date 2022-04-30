//Lesson: Access modifier
#include "AccessModifier.h"
#include "stdafx.h"

class Pointer
{
//Modifier access default: private. The main class, friend classes and functions have access.
public:
	int a = 0;
	int b = 0;
	void firstPrint()
	{
		cout << "a: " << a << "\nb: " << b << endl;
		secondPrint();
	}
private:
	int c = 0;
	void secondPrint()
	{
		cout << "c: " << c << endl;
	}
protected:
	int d = 0;
};

void LaunchAccessModifier()
{
	Pointer firstPointer;
	firstPointer.a = 10;
	firstPointer.firstPrint();//a,b,c
	//firstPointer.c = 10;//No access
	//firstPointer.d = 10;//No access
}