// ConsoleRogueLike_x64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RogueMap.h"


int main(void)
{
	RogueMap rm;
	rm.popMap(rm.sample);
	rm.pushMap(rm.Map);

	getchar();
    return 0;
}

