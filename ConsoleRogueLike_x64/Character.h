#pragma once
#include "stdafx.h"
#include "Val2x.h"


class Character
{
public:
	/*Base ctor for instancing*/
	Character() :fname("char"), fpos(new Val2x(0)), sign('O'){};

protected:
	
	/*Character name*/
	string fname;

	/*Character position*/
	Val2x* fpos;

	/*Character signature*/
	char sign;


	/*Character Health*/
	float fhealth;
	
	/*Character Attack*/
	float fattack;

	/*Character Experience*/
	float fexperience;

	/*Character Speed*/
	float fspeed;


	/*Get Character Position*/
	virtual Val2x getFPos() = 0;

	/*Character damage*/
	virtual void damaged(float f) = 0;

	/*Character movement*/
	virtual void move(enum Direction dir) = 0;

};

/*Motion Direction*/
enum Direction { UP, DOWN, LEFT, RIGHT, STOP };