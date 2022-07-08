#include "struct.h";

//Video #129. Структуры(struct).

class MyClass
{
	int a = 10;
	void Print()
	{
		cout << "a: " << a << endl;
	}
};
class MyClassCopy : public MyClass //Modification access private default
{
public:
	int a = 11;
};
struct MyStruct
{
	MyStruct(int b)
	{
		this->b = b;
	}
	int a = 22;
	void Print()
	{
		cout << "a: " << a << endl;
	}
	~MyStruct()
	{
	
	}
private:
	int b = 0;
};

struct MyStructCopy : MyStruct //Modification access public default
{
	int b = 23;
};
void LaunchStruct()
{
	MyClass myClass;
	//myClass. //no see variable
	MyStruct myStruct(12);
	myStruct.a;
	myStruct.Print();
}