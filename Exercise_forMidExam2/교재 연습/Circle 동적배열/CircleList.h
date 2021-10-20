#ifndef _CircleList
#define _CircleList

#include "Circle.h"

class CircleList {
	Circle* cList;
	int size;
	int maxNum;

public:
	CircleList(int size = 0);
	~CircleList();
	int getSize(void) const { return size; };
	void setSize(int size);
	Circle* getcList(void) const { return cList; };
	void setcList(int index, int num);
	void show(void);
	
};
#endif // !_CircleList
