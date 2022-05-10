#include "AbstractClass.h"

class Weapon
{
public:
	virtual void Shoot() = 0;//Initialization abstract function

};

class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG!\n";
	}
};

class SubmachineGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG, BANG, BANG!!!\n";
	}
};

class Basooka : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABUUM!\n";
	}
};

class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "CHIRKKK!!!\n";
	}
};

class Player
{
public:
	void Shoot(Weapon * weapon)
	{
		weapon->Shoot();
	}
};

void LaunchAbstractClass()
{
	Player player;
	Basooka basooka;
	SubmachineGun submachineGun;

	player.Shoot(&submachineGun);

}