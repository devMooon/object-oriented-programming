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
	
	//이항연산자
	Power operator+(const Power& power) const;
	Power operator+(const int num) const;
	bool operator==(const Power& power) const;
	Power& operator+=(const Power& power);

	//단항연산자
	Power& operator++(); //전위
	Power operator++(int num); //후위
	bool operator!() const;

	//friend 함수
	friend ostream& operator<<(ostream& os, const Power& power);
	friend Power operator+(const int num, const Power& power);
};
#endif // !_Power_h