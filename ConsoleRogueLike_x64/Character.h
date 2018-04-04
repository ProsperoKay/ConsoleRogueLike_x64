#pragma once
#include "stdafx.h"

class Character
{
public:
	Character() :name("Character"), health(0.0f), attack(0.0f), experience(0.0f), speed(0.0f) {};
	virtual ~Character()=0 { }

protected:
	string name;
	float health;
	float attack;
	float experience;
	float speed;
	int position[2];

public:
	void damage();
	virtual void damaged();
	virtual void move();
};

