#include "Power.h"
#include <iostream>

using std::ostream;

Power operator+(const Power& p1, const Power& p2)
{
	Power newP;

	newP.kick = p1.kick + p2.kick;
	newP.punch = p1.punch + p2.punch;

	return newP;
}
ostream& operator<<(ostream& os, const Power& power)
{
	return os << "Kick: " << power.kick << ", " << "Punch: " << power.punch;
}
Power& operator++(Power& power)
{
	++power.kick;
	++power.punch;

	return power;
}
Power operator++(Power& power, int num)
{
	Power newP = power;

	++power.kick;
	++power.punch;

	return newP;
}