#include "ClassTemplates.h"

//Video: #126. Class Templates.


template<class T1>
//template<typename T, typename T2>
class MyClass
{
public:
	MyClass()
	{
	
	}
	MyClass(T1 value)
	{
		this->value = value;
	}
	//MyClass(T value, T2 value2)
	//{
	//	this->value = value;
	//}
	void DataTypeSize()
	{
		cout << sizeof(value) << endl;
	}
	T1 GetValue()
	{
		return value;
	}
	
protected:
	T1 value;
};

class Point
{
public:
	Point()
	{
		
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
private:
	int x = 0;
	int y = 0;
	int z = 0;
};

template<class T1>
class TypeInfo : public MyClass<T1>
{
public:
	TypeInfo(T1 value) : MyClass(value)//error
	{
	}
	void ShowTypeName()
	{
		//cout << "Type name: " << typeid(value).name() << endl;
	}
private:
};

//Video #128: Specialisations a class templates
template <class T>
class Printer
{
public:
	void Print(T value)
	{
		cout << "Value: " << value << endl;
	}
};

template<>//Specialisation a class templates
class Printer<string>
{
public:
	void Print(string value)
	{
		cout << "____" << value << "____" << endl;
	}
};

void LaunchClassTemplates()
{
	//Point point;

	//int value = 5;
	//MyClass<int> myClass(value);
	//MyClass<int, int> myClass(value, value);
	//MyClass<Point> myClass(point);
	//myClass.DataTypeSize();
	//cout << myClass.GetValue() << endl;
	//double dValue = 2.0;
	//TypeInfo<double> typeInfo(dValue);
	//typeInfo.ShowTypeName();
	// 
	//Video #128. Specialisations a class templates
	//Printer<int> printer;
	Printer<string> printer;
	//printer.Print(12);
	printer.Print("Hello world!!!");
}