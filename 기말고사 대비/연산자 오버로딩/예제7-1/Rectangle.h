#ifndef _Rectangle_h
#define _Rectangle_h

#include <iostream>

using std::ostream;

class Rectangle
{
	int width;
	int height;

public:
	Rectangle(int width, int height);
	friend bool operator==(const Rectangle& r1, const Rectangle& r2);
	friend ostream& operator<<(ostream& os, const Rectangle& r);
};

#endif // !_Rectangle_h