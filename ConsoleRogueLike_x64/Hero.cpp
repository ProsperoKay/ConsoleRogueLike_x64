#include "stdafx.h"
#include "Hero.h"


Hero::Hero()
{
}

void Hero::damage(string ch)
{
}

void Hero::damaged(float f)
{
}

void Hero::move(Direction dir)
{

}

void Hero::healthf(float f)
{
	this->fhealth = f;
}

void Hero::attackf(float f)
{
	this->fattack = f;
}

void Hero::experiencef(float f)
{
	this->fexperience = f;
}

void Hero::speedf(float f)
{
	this->fspeed = f;
}
