#ifndef _Triangular_h
#define _Triangular_h
#include "Shape.h"
class Triangular : public Shape
{
public:
	Triangular(string name = "", int width = 0, int height = 0)
		:Shape(name, width, height) {}
	double getArea() { return width * height / 2; }
};
#endif // !_Triangular_h