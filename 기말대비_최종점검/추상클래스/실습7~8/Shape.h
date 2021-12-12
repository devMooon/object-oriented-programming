#ifndef _Shape_h
#define _Shape_h
#include <string>

using std::string;

class Shape
{
protected:
	string name;
	int width, height;
public:
	Shape(string name = "", int width = 0, int height = 0)
		:name(name), width(width), height(height) {}
	virtual double getArea() = 0;
	string getNAme() { return name; }
};
#endif // !_Shape_h