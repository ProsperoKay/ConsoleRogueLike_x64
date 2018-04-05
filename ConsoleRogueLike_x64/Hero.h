#pragma once
#include "Character.h"
#include "Val2x.h"

class Hero :public Character
{

public:

	/*ctor*/
	Hero();

	/*@Override : Character apply damage*/
	void damage(string ch);

	/*@Override : Character damage*/
	void damaged(float f);

	/*@Override : Character movement*/
	void move(enum Direction dir);

private:

	/*Set Health*/
	void healthf(float);

	/*Set Attack*/
	void attackf(float);
	
	/*Set XP*/
	void experiencef(float);
	
	/*Set Speed*/
	void speedf(float);

};

