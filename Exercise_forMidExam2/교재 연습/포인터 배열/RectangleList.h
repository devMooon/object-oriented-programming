#ifndef _RectangleList_h
#define _RectangleList_h

#include "Rectangle.h"

class RectangleList {
	Rectangle* rList[3];
	int Psize;

public:
	RectangleList();
	void showList(void) const;
};
#endif // !_RectangleList_h

