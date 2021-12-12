#ifndef _Rect_h
#define _Rect_h
#include "Shape.h"
class Rect : public Shape
{
public:
    Rect(string name = "", int width = 0, int height = 0)
        :Shape(name, width, height) {}
    double getArea() { return width * height; }
};

#endif // !_Rect_h


