#ifndef _CircleList_h
#define _CircleList_h

#include "Circle.h"

class CircleList {
	Circle* cList;
	int size;
public:
	CircleList(int size = 0);
	CircleList(const CircleList& cl);
	~CircleList();
	int getClist(int index) const;
	void setClist(int size = 0);
	void show(void) const;
};
#endif // !_CircleList_h

