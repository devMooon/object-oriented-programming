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
	
	//���׿�����
	Power operator+(const Power& power) const;
	Power operator+(const int num) const;
	bool operator==(const Power& power) const;
	Power& operator+=(const Power& power);

	//���׿�����
	Power& operator++(); //����
	Power operator++(int num); //����
	bool operator!() const;

	//friend �Լ�
	friend ostream& operator<<(ostream& os, const Power& power);
	friend Power operator+(const int num, const Power& power);
};
#endif // !_Power_h