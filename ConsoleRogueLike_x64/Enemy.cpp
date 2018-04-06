#include "stdafx.h"
#include "Enemy.h"


Enemy::Enemy()
{
	return;
}


Enemy::Enemy(string ch, Val2x * v, char s)
{
	this->fname = ch;
	this->fpos = v;
	this->sign = s;
}


Val2x* Enemy::getFPos()
{
	return this->fpos;
}

void Enemy::damaged(float f)
{
	this->fhealth -= f;
}

void Enemy::move(Direction dir)
{
	switch (dir) {

	case UP:
		this->fpos->y -= 1;
		break;

	case DOWN:
		this->fpos->y += 1;
		break;

	case LEFT:
		this->fpos->x -= 1;
		break;

	case RIGHT:
		this->fpos->x += 1;
		break;
	case STOP:
		this->fpos->x -= 1;
		this->fpos->y -= 1;
		break;
		;
	default:
		break;
	}

}

void Enemy::healthf(float f)
{
	this->fhealth = f;
}

float Enemy::healthf()
{
	return this->fhealth;
}

void Enemy::attackf(float f)
{
	this->fattack = f;
}

float Enemy::attackf()
{
	return this->fattack;
}

void Enemy::experiencef(float f)
{
	this->fexperience = f;
}

float Enemy::experiencef()
{
	return this->fexperience;
}

void Enemy::speedf(float f)
{
	this->fspeed = f;
}

float Enemy::speedf()
{
	return this->fspeed;
}

char Enemy::signf()
{
	return this->sign;
}
