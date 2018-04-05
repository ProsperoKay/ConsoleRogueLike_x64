#pragma once
class Val2x
{
public:
	Val2x(int fxy) :x(fxy), y(fxy) {};
	Val2x(int fx, int fy) :x(fx),y(fy){};
	~Val2x() {};
public :
	const int x;
	const int y;
};

