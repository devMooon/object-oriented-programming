#ifndef _ComplexList_p_h
#define _ComplexList_p_h
#include "Complex.h"
#include <vector>

using std::vector;

class ComplexList_p
{
	vector<Complex*> v;
	
public:
	~ComplexList_p();
	Complex& Get(int n) throw(const char*);
	Complex* pGet(int n) throw(const char*);

	void add(double real = 0, double image = 0);
	int length() const;
	void print();
};

#endif// !_ComplexList_p_h



