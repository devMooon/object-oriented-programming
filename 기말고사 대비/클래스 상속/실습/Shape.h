#ifndef _Shape_h
#define _Shape_h
#include <string>

using std::string;

class Shape
{
protected:
	string name;
	int width;
	int height;

public:
	Shape(string name, int width, int height);
	string getName() { return name; }
	virtual int getArea() = 0;
};

#endif // !_Shape_h