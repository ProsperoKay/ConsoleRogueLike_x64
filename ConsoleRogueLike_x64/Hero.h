#pragma once
#include "Character.h"
#include "RogueMap.h"

class Hero :public Character
{

public:

	/**ctor*/
	Hero();
	/**Functional ctor*/
	Hero(string ch, Val2x* v, char s);


	/*@Override : Get Character Position*/
	Val2x* getFPos();

	/*@Override : Character damage*/
	void damaged(float f);

	/*@Override : Character movement*/
	void move(enum Direction dir);
	
	/*Get Hero Health*/
	float getH();

	/*Get signature*/
	char signf();
};

