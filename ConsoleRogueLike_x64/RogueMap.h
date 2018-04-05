#include "Character.h"
#include "Val2x.h"

#pragma once
class RogueMap
{
public:
	RogueMap();
	~RogueMap();
private :
	Val2x* tLoc;
public:
	void setLoc(Character* c);
	static vector<const char*> Map;
	static void Drawdfltmap();
};

