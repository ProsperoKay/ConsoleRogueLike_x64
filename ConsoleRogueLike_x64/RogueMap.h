#pragma once
class RogueMap
{
public:
	RogueMap();
	~RogueMap();
protected :
	static vector<const char*> defaultMap;
public:
	static vector<const char*> Map;
	static void Drawdfltmap();
};

