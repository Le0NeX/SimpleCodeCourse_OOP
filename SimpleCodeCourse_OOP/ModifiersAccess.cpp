#include "ModifiersAccess.h"

//Lesson: 115. Modifier access

class A
{
public:
	string MessageOne = "Hi, I am public message.";
private:
	string MessageTwo = "Hi, I am private message.";
protected:
	string MessageThree = "Hi, I am protected message.";
};

//class B : protected A //Access to protected
//class B : private A //No access to class A through object.
class B : public A //Access to public and protected
{
public:
	void PrintMessage()
	{
		cout << MessageOne << endl;
		cout << MessageThree << endl;
	}

};

void LaunchModifierAccess()
{
	B b;
	b.PrintMessage();
}