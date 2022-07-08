#include "HandlingException.h"

//Lesson: #138. Handling exception
void HandlingException()
{
	string FileLocation = "MyFile.tx";
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit);//Error console output
	try
	{
		cout << "Trying to open a file\n";
		fin.open(FileLocation);
		cout << "File successfully opened\n";
	}
	catch (const ifstream::failure& ex)
	{
		cout << ex.what() << endl;//Function "what()" print to the console, what happened
		cout << ex.code() << endl;//Error code output
		cout << "Opening error!\n";
	}
}

//Lesson: 142. Own exception class
class MyException : public exception
{
public:
	MyException(const char *msg, int dataState) : exception(msg)
	{
		this->dataState = dataState;
	}
	int GetDataState()
	{
		return dataState;
	}
private:
	int dataState = 0;
};

//Lesson: #140. Generation exception throw.
class ThrowException
{
public:
	void Throw(int value)
	{
		if (value < 0)
		{
			throw exception("Number less than zero!");
		}
		if (value == 1)
		{
			throw 1;

		}
		if (value == 2)
		{
			throw MyException("Number equal 2", value);//Own exception class
		}
		//cout << "Runs a function <Foo>, value this a function: " << value << endl;
	}
private:

};

void LaunchException()
{
	//HandlingException();
	ThrowException throwException;
	try
	{
		throwException.Throw(2);
	}
	//catch (const exception& ex)//Pointers in parameters type a data 
	//{
	//	cout << "We catched: " << ex.what() << endl;
	//}
	//Lesson: #141. Catch block multiple
	catch (const int& ex)
	{
		cout << "We catched exception:" << ex << endl;
	}
	//Lesson: 142. Own exception class
	catch (MyException& ex)
	{
		cout << "Catched own exception class: " << ex.GetDataState() << endl;
	}

}
