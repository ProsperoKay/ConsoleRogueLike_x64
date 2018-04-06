#pragma once
#include "Character.h"
class Enemy :
	public Character
{
public:
	/*ctor*/
	Enemy();

	/*Enemy Initializer*/
	Enemy(string ch, Val2x* v, char s);



	/*@Override : Get Character Position*/
	Val2x getFPos();

	/*@Override : Character damage*/
	void damaged(float f);

	/*@Override : Character movement*/
	void move(enum Direction dir);



	/*Set Health*/
	void healthf(float);
	/*Get Health*/
	float healthf();

	/*Set Attack*/
	void attackf(float);
	/*Get Attack*/
	float attackf();

	/*Set XP*/
	void experiencef(float);
	/*Get XP*/
	float experiencef();

	/*Set Speed*/
	void speedf(float);
	/*Get Speed*/
	float speedf();

};

