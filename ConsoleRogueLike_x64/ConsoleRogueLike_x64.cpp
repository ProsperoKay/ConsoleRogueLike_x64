// ConsoleRogueLike_x64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hero.h"

class Base {
protected :
	int value;
};

class Derik :public Base {
public :
	void show() {
		cout << value << endl;
	}
};

int main(void)
{
	Hero hr;
	hr.move(UP);

	getchar();
    return 0;
}

