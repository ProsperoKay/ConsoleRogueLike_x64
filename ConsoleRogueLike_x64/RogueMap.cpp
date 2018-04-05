#include "stdafx.h"
#include "RogueMap.h"

vector<const char*>RogueMap::defaultMap;

RogueMap::RogueMap()
{
}


RogueMap::~RogueMap()
{
}


const char* n1 = "#####################################################";
const char* n2 = "##.................................................##";

void RogueMap::Drawdfltmap()
{

	defaultMap.push_back(n1);

	for (int i = 0; i < 20; i++) {
		defaultMap.push_back(n2);
	}

	defaultMap.push_back(n1);

	vector<const char*>::iterator it;


	for (it = defaultMap.begin(); it != defaultMap.end(); it++) {
		cout << *it << endl;
	}

}