#include "Heirs.h"

//Lesson: 114. Heirs


class Human
{
public:
	//string name = "Human";
	string GetName()
	{
		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
private:
	string name = "Human";
};

class Student : public Human
{
public:
	string group = "One";
	void Learn()
	{
		cout << "I'am studuing!" << endl;
	}
};
class ExtramuralStudent : public Student
{
public:
	void Learn()
	{
		cout << "I am exteramural Student" << endl;
	}

};

class Professor : public Human
{
public:
	string name = "Name professor";
	string subject = "Professor subject";
};

void LaunchHeirs()
{
	Student student;
	student.group;
	student.Learn();
	//student.name;//Human
	//cout << student.GetName() << endl;

	ExtramuralStudent extramuralStudent;
	extramuralStudent.Learn();//ExtramuralStudent
	extramuralStudent.group;
	//extramuralStudent.name;//Human
	//cout << extramuralStudent.GetName() << endl;
	extramuralStudent.SetName("Hi");

	Professor professor;
	professor.subject;
	//professor.name;//Professor
}