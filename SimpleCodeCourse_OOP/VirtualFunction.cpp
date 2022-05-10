#include "VirtualFunction.h"
//Lesson: 120. Virtual function.

class Gun
{
public:
	virtual void Shoot()
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void Shoot() override //Override function Shoot() in class a heirs
	{
		cout << "BANG, BANG, BANG!!!" << endl;
	}
};
class Player
{
public:
	void Shoot(Gun * gun)
	{
		gun->Shoot();
	}
};

//Lesson: 125. Call the function basic a class
class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}
	virtual string GetMsg()
	{
		return msg;
	}
private:
	string msg;
};

class BraketsMsg : public Msg
{
public:
	BraketsMsg(string msg) : Msg(msg)
	{

	}
	string GetMsg() override
	{
		return "[" + Msg::GetMsg() + "]";//Call the function basic a class
	}
};

class Printer
{
public:
	void Print(Msg* msg)
	{
		cout << msg->GetMsg() << endl;
	}
};


void LaunchVirtualFunction()
{
	Gun gun;
	SubmachineGun submachineGun;
	Gun* weapon = &submachineGun;
	weapon->Shoot();
	Player player;
	player.Shoot(&gun);
	player.Shoot(&submachineGun);

	//Lesson: 125. Call the function basic a class
	Msg msg("Hi");
	Printer printer;
	printer.Print(&msg);
	BraketsMsg braketsMsg("Hi-Hi");
	cout << braketsMsg.GetMsg() << endl;
}