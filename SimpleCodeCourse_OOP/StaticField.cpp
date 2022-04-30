#include "StaticField.h"

class StaticField
{
public:
	static int count;
	StaticField(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
		id = count;
	}
	void Print()
	{
		cout << "weight: " << weight << ", color: " << color << endl;
	}
	int GetId()
	{
		return id;
	}
private:
	int weight = 0;
	string color = "";
	int id = 0;
};
int StaticField::count = 0;


void LaunchStaticField()
{
	StaticField staticField(120, "Red");
	StaticField staticFieldTwo(130, "Blue");
	staticField.Print();
	cout << "count: " << staticField.count << endl;
	cout << "id: " << staticField.GetId() << endl;
}