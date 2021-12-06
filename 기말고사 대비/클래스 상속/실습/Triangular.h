#ifndef _Triangular_h
#define _Triangular_h
#include "Shape.h"
class Triangular :
    public Shape
{
public:
    Triangular(string name, int width, int height) :
        Shape(name, width, height) {}
    int getArea();
};
#endif // !_Triangular_h



