#include "Character.h"
#include "Hero.h"
#include "Val2x.h"

#pragma once
class RogueMap
{
public:
	RogueMap();
	~RogueMap();
private :
	Val2x* hLoc;
public:
	void setLoc(Character* ch);
	void setLoc(Hero ch);

	vector<const char*> Map;
};

