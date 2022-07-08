#include "Enum.h";

//Video: #124. Enum.

class PC
{
public:
	enum PCState
	{
		OFF,
		ON,
		SLEEP
	};
	PCState GetState()
	{ 
		return State;
	}
	void SetState(PCState state) 
	{ 
		this->State = state;
	}
private:
	PCState State;
};
enum Speed
{
	MIN  = 150,
	RECOMEND = 600,
	MAX = 800
};

void LaunchEnum()
{
	PC pc;
	pc.SetState(PC::PCState::ON);
	if (pc.GetState() == PC::PCState::ON)
	{
		cout << "On computer!" << endl;
	}
	switch (pc.GetState())
	{
	case PC::PCState::ON:
		cout << "On computer!" << endl;
		break;
	case PC::PCState::OFF:
		cout << "Off computer!" << endl;
		break;
	case PC::PCState::SLEEP:
		cout << "Sleep computer!" << endl;
		break;
	}
	Speed speed = Speed::MAX;
	cout << speed << endl;//800

}