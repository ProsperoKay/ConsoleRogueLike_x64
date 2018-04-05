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
	switch (dir) {

	case UP:
		this->fpos->y--;
		cout << "moving up" << endl;
		break;

	case DOWN:
		this->fpos->y++;
		cout << "moving down" << endl;
		break;

	case LEFT:
		this->fpos->x--;
		cout << "moving left" << endl;
		break;

	case RIGHT:
		this->fpos->x++;
		cout << "moving right" << endl;
		break;

	default:
		break;
	}
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
