#pragma once
class Val2x
{
public:

	/*Functional ctors*/
	Val2x(int fxy) :x(fxy), y(fxy) {};
	Val2x(int fx, int fy) :x(fx),y(fy){};
	
	/*dtor*/
	~Val2x() {};

	/*XY Vector Coordinates*/
public :
	/*X Coordinate*/
	int x;

	/*Y Coordinate*/
	int y;
};

