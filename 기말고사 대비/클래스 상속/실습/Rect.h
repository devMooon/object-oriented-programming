#ifndef _Rect_h
#define _Rect_h
#include "Shape.h"
class Rect :
    public Shape
{
public:
    Rect(string name, int width, int height) :
        Shape(name, width, height) {}
    int getArea();
};

#endif // !_Shape_h


