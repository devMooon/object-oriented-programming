#ifndef _Power_h
#define _Power_h

#include <iostream>

using std::ostream;
using std::istream;

class Power
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0);

	//연산자오버로딩
	//Power operator+(const Power& power) const;
	Power& operator+=(const Power& power);
	Power operator+(const int kick);
	Power& operator++();
	bool operator!();
	Power operator++(int notused);

	//friend 함수
	friend Power operator+(const Power& power1, const Power& power2);
	friend ostream& operator<<(ostream& os, const Power& power);
	friend istream& operator>>(istream& is, Power& power);
	friend Power operator+(int num, const Power& power);
};

#endif // !_Power_h