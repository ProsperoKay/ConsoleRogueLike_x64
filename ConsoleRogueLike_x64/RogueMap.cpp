#include "stdafx.h"
#include "RogueMap.h"

vector<string>::iterator it;

RogueMap::RogueMap()
{
	return;
}

void RogueMap::setLoc(Character * ch)
{
	return;
}

void RogueMap::setLoc(Hero* ch)
{
	Val2x* p = ch->getFPos();

	const int x = p->x;
	const int y = p->y;

	Map[y][x] = ch->signf();
}

void RogueMap::setLoc(Enemy* ch)
{
	this->hLoc = ch->getFPos();
}

void RogueMap::pushMap(vector<string> map)
{
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map.size(); j++) {
			cout << map[i][j];
		}
		cout << endl;
	}
}

void RogueMap::popMap(string sh[])
{
	for (int i = 0; i < 30; i++) {
		Map.push_back(sh[i]);
	}
}
