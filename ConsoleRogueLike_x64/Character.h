#pragma once
#include "stdafx.h"

class Character
{
protected:
	string name;
	float health;
	float attack;
	float experience;
	float speed;
	int position[2];

private:
	virtual void damage()=0;
	virtual void damaged()=0;
	virtual void move()=0;
};

