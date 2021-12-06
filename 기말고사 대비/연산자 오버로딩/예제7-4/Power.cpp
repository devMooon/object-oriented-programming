#include "Power.h"
#include <iostream>

using std::ostream;
using std::cin;

Power::Power(int kick, int punch)
	:kick(kick), punch(punch)
{

}

/*Power Power::operator+(const Power& power) const
{
	int newKick = this->kick + power.kick;
	int newPunch = this->punch + power.punch;

	Power newPower(newKick, newPunch);

	return newPower;
}*/
Power& Power::operator+=(const Power& power)
{
	this->kick += power.kick;
	this->punch += power.punch;

	return *this;
}
Power Power::operator+(const int kick)
{
	int newKick = this->kick += kick;

	Power p(newKick, this->punch);

	return p;
}
Power& Power::operator++()
{
	++this->kick;
	++this->punch;

	return *this;
}
bool Power::operator!()
{
	if (this->kick == 0 && this->punch == 0) return false;
	else return true;
}
Power Power::operator++(int notused)
{
	Power p = *this;

	++this->kick;
	++this->punch;

	return p;
}

//friend ÇÔ¼ö
Power operator+(const Power& power1, const Power& power2)
{
	int newKick = power1.kick + power2.kick;
	int newPunch = power1.punch + power2.punch;

	Power newPower(newKick, newPunch);

	return newPower;
}
ostream& operator<<(ostream& os, const Power& power)
{
	return os << power.kick << " & " << power.punch;
}
istream& operator>>(istream& is, Power& power)
{
	int newKick, newPunch;

	cin >> newKick >> newPunch;
	power.kick = newKick;
	power.punch = newPunch;

	return is;
}
Power operator+(int num, const Power& power)
{
	int newKick = power.kick + num;

	Power newPower(newKick, power.punch);

	return newPower;
}
