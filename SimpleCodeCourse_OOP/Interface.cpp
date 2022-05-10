#include "Interface.h"
//Lesson: 131. Interface.

class IBicycle //Realisation interface
{
public:
	void virtual EwistTheWheel() = 0;
	void virtual Ride() = 0;
};

class SimplyBicycle : public IBicycle
{
public:
	void EwistTheWheel() override
	{
		cout << "Runs the method EwistTheWeel() a class <SimplyBicycle>\n";
	}
	void Ride() override
	{
		cout << "Runs the method Ride() a class <SimplyBicycle>\n";
	}
};

class SportBicycle : public IBicycle
{
public:
	void EwistTheWheel() override
	{
		cout << "Runs the method EwistTheWeel() a class <SportBicycle>\n";
	}
	void Ride() override
	{
		cout << "Runs the method Ride() a class <SportBicycle>\n";
	}
};

class Human
{
public:
	void RideOn(IBicycle & ibCycle)
	{
		cout << "turn the steering wheel\n";
		ibCycle.EwistTheWheel();
		cout << "Go\n";
	}
};

//Lesson: 132. Diamond inheritance
class Component
{
public:
	Component(string companyName)
	{
		cout << "Run constructor class <Component>\n";
		this->CompanyName = companyName;
	}
private:
	string CompanyName;
};

class Gpu : public Component
{
public:
	Gpu(string companyName) : Component(companyName)
	{
		cout << "Run constructor class <Gpu>\n";
	}
};

class Memory : public Component
{
public:
	Memory(string companyName) : Component(companyName)
	{
		cout << "Run constructor class <Memory>\n";
	}
};

class GraphicCard : public Gpu, public Memory
{
public:
	GraphicCard(string GpuCompanyName, string MemoryCompanyName) : Gpu(GpuCompanyName), Memory(MemoryCompanyName)
	{
		cout << "Run constructor class <GraphicCard>\n";
	}
};
void LaunchInterface()
{
	Human human;
	SimplyBicycle simplyBicycle;
	human.RideOn(simplyBicycle);

	SportBicycle sportBicycle;
	human.RideOn(sportBicycle);

	//Lesson:132. Diamond inheritance
	Memory memory("Company memory");
	Gpu gpu("Company Gpu");
	GraphicCard graphicCard("Gpu company","Memory company");
}