// ConsoleRogueLike_x64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(void)
{
	printf("Hello World!\n");
	
	char brd[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)brd[i][j]='H';
	}

	char *ch= new char(brd[3][3]);

	printf(ch);
	//printf(*brd,"\n");
	printf_s("\n____________________END_____________________\n");

	delete[] ch;

	getchar();
    return 0;
}

