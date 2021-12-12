#ifndef _Power_h
#define _Power_h
#include <iostream>

using std::ostream;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) :kick(kick), punch(punch) {}

	friend Power operator+(const Power& p1, const Power& p2);
	friend ostream& operator<<(ostream& os, const Power& power);
	friend Power& operator++(Power& power);
	friend Power operator++(Power& power, int num);
};
#endif // !_Power_h