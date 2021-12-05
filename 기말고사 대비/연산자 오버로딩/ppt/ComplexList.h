#ifndef _ComplexList_h
#define _ComplexList_h
#include "Complex.h"

class ComplexList
{
	Complex* cl;
	int size;
	int realSize;

public:
	ComplexList(int size);
	ComplexList(const ComplexList& complexList);
	~ComplexList();

	Complex& operator[](int i);
	ComplexList& operator=(const ComplexList& complexList);
	bool operator==(const ComplexList& complexList) const;
	void add(const Complex& complex);
	void show();
};


#endif // !_ComplexList_h

