#include "StaticMethod.h"

class StaticMethod
{
public:
	StaticMethod(int x, string word)
	{
		this->x = x;
		this->word = word;
		this->count++;
	}
	static int GetCount()
	{
		return count;
	}
	void Print()
	{
		cout << "x: " << this->x << ", word: " << this->word << endl;
	}
	static void ShangeWord(StaticMethod& staticMethod, const string word)
	{
		staticMethod.word = word;
	}
private:
	static int count;
	int x = 0;
	string word = "";
};
int StaticMethod::count = 0;//Initialization the static variable a count;


void LaunchStaticMethod()
{
	StaticMethod staticMethod0(120, "Hi");
	StaticMethod staticMethod1(120, "Hi");
	StaticMethod staticMethod2(120, "Hi");
	StaticMethod staticMethod3(120, "Hi");
	staticMethod0.Print();
	cout << StaticMethod::GetCount() << endl;
	StaticMethod::ShangeWord(staticMethod0,"Hello");//Access to static method
	staticMethod0.Print();//Output Hello
}