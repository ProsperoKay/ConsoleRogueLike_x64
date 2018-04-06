#include "stdafx.h"
#include "Hero.h"

Hero::Hero()
{
	this->fattack=0.6f;
	this->fhealth=300.0f;
	this->fexperience=30.0f;
	this->fspeed=60.0f;
}

Hero::Hero(string ch, Val2x * v, char s)
{
	this->fname = ch;
	this->fpos = v;
	this->sign = s;
}

Val2x Hero::getFPos()
{
	return *(this->fpos);
}

void Hero::damaged(float f)
{
	this->fhealth -= f;
}

void Hero::move(Direction dir)
{
	switch (dir) {

	case UP:
		this->fpos->y - 1;
		break;

	case DOWN:
		this->fpos->y + 1;
		break;

	case LEFT:
		this->fpos->x - 1;
		break;

	case RIGHT:
		this->fpos->x + 1;
		break;
	case STOP:
		this->fpos->x - 1;
		this->fpos->y - 1;
		break;
		;
	default:
		break;
	}
}

float Hero::getH()
{
	return fhealth;
}