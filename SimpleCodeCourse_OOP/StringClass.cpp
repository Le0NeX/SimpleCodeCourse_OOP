#include "StringClass.h"
#include "stdafx.h"

//Lesson: Video #099.

class MyString
{
public:
	MyString()
	{
		this->str = nullptr;
	}
	MyString(const char* str)
	{
		int length = strlen(str);
		this->str = new char[length+1];//Create new char array on the count variable length
		
		for (int i = 0; i < length; i++)
		{
			this->str[i] = str[i];
		}
		this->str[length] = '\0';
	}
	MyString& operator = (const MyString &other)//Overload an operator equal
	{
		if (this->str != nullptr)
		{
			delete[] this->str;
		}
	}
	MyString& operator + (const MyString &other)//Overload oddition operator
	{
		MyString myString;
		int thisLength = strlen(this->str);
		int otherLength = strlen(other.str);
		myString.str = new char[thisLength+otherLength+1];
		int countLength = 0;
		for (;countLength < thisLength; countLength++)
		{
			myString.str[countLength] = this->str[countLength];
		}
		for (int i = 0; i < otherLength; i++, countLength++)
		{
			myString.str[countLength] = other.str[i];
		}
		myString.str[countLength] = '\0';
		return myString;
	}
	bool operator == (const MyString & other)
	{
		if (this->length != other.length)
		{
			return false;
		}

		for (int i = 0; i < this->length; i++)
		{
			if (this->str[i] != other.str[i])
			{
				return false;
			}
		}
		return true;
	}
	~MyString() 
	{
		//delete[] this->str; 
		//str = nullptr;
	}
	int Length()
	{
		return length;
	}
private:
	char* str = nullptr;//Pointer initialization with help nullptr
	int length = 0;
};

void LaunchStringClass()
{
	MyString str("Hello, ");
	MyString str2("World!");
	MyString myString("Test");
	MyString result = str + str2;
	bool equal = str == str2;
	cout << "Result equal: " << equal << endl;
}
		