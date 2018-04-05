#pragma once
#include "Character.h"
class Hero :
	public Character
{
public:
	Hero();
	~Hero();
private:
	void damage();
	void damaged();
	void move();
};

