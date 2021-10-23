#ifndef _ComplexList_h
#define _ComplexList_h

#include "Complex.h"

class ComplexList {
	static int OBJECT;
	Complex* cList;
	int size;
public:
	ComplexList(int size = 10);
	ComplexList(const ComplexList& cl);
	~ComplexList();

	void modify(int size);
	void setComplexList(int size, int num = 1);
	void showComplexList(void)const;

};
#endif // !_ComplexList_h
