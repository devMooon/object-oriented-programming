#ifndef _COMPLEXLIST_H
#define _COMPLEXLIST_H
#include <vector>
#include "Complex.h"

using std::vector;

class ComplexList {
	vector<Complex> v;

public:
	Complex& Get(int n) throw(const char*);
	Complex* pGet(int n) throw(const char*);

	void add(double real = 0, double image = 0);
	int length() const;
	void print();
};
#endif // !_COMPLEXLIST_H