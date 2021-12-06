#ifndef _Oval_h
#define _Oval_h
#include "Shape.h"
class Oval :
    public Shape
{
public:
    Oval(string name, int width, int height) :
        Shape(name, width, height) {}
    int getArea();
};
#endif // !_Oval_h