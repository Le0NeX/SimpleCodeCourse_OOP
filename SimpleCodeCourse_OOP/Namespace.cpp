#include "Namespace.h"
//Lesson: Namespace.

namespace firstNS
{
	void Foo()
	{
		cout << "Runs vunction <firstNS>" << endl;
	}
}

namespace secondNS
{
	void Foo()
	{
		cout << "Runs vunction <secondNS>" << endl;
	}
	int a = 0;
	
	class Point
	{

	};
}

void LaunchNamespace()
{
	firstNS::Foo();
	secondNS::Foo();
	secondNS::Point;
}