#include "Power.h"
#include <iostream>

using std::ostream;

//이항연산자
Power Power::operator+(const Power& power) const
{
	Power p;
	p.kick = this->kick + power.kick;
	p.punch = this->punch + power.punch;

	return p;
}
Power Power::operator+(const int num) const
{
	Power p;

	p.kick = this->kick + num;
	p.punch = this->punch + num;

	return p;
}
bool Power::operator==(const Power& power) const
{
	return this->kick == power.kick && this->punch == power.punch;
}
Power& Power::operator+=(const Power& power)
{
	this->kick += power.kick;
	this->punch += power.punch;

	return *this;
}


//단항연산자
Power& Power::operator++()
{
	++this->kick;
	++this->punch;

	return *this;
}
Power Power::operator++(int num)
{
	Power p = *this;

	++this->kick;
	++this->punch;

	return p;
}
bool Power::operator!() const
{
	return this->kick == 0 && this->punch == 0;
}


//friend 함수
ostream& operator<<(ostream& os, const Power& power)
{
	return os << "Kick: " << power.kick << ", Punch: " << power.punch;
}
Power operator+(const int num, const Power& power)
{
	Power p;
	p = power + num;

	return p;
}