#ifndef _Shape_h
#define _Shape_h
#include <iostream>
#include <string>

using std::ostream;
using std::string;

class Shape
{
protected:
	string type;
	int width;
	int height;
public:
	Shape(string type, int width, int height) :type(type), width(width), height(height) {}

	virtual int getArea()const = 0;
	Shape& operator*=(const int NUM);
	friend ostream& operator<<(ostream& os, const Shape& shape);
};
#endif // !_Shape_h