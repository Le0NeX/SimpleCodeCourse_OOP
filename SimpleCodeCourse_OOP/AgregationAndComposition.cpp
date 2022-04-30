#include "AgregationAndComposition.h"

//Lesson: 113 Agregation and composition

class Cap
{
public:
	string GetColor()
	{
		return color;
	}
private:
	string color = "Red";
};

class Model
{
public:
	void InspectModel()
	{
		cout << "Cap: " << cap.GetColor() << endl;
	}
private:
	Cap cap;
};


class Human
{
public:
	void Think()
	{
		brain.Think();
	}
	void InspectTheCap()
	{
		cout << "My cap" << cap.GetColor() << endl;
	}
private:
	class Brain
	{
	public:
		void Think()
		{
			cout << "Brain: I think!" << endl;
		}
	};
	Brain brain;
	Cap cap;
};

void LaunchAgrigationAndComposition()
{
	setlocale(LC_ALL, "ru");
	Human human;
	human.Think();
	human.InspectTheCap();
	Model model;
	model.InspectModel();
}