#ifndef _Calculator_h
#define _Calculator_h
class Calculator
{
public:
	virtual int add(int a, int b) = 0;
	virtual int subtract(int a, int b) = 0;
	virtual double average(int a[], int size) = 0;
};
#endif // !_Calculator_h