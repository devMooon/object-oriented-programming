#ifndef _Oval_h
#define _Oval_h
#include "Shape.h"
class Oval : public Shape
{
public:
    Oval(string name = "", int width = 0, int height = 0)
        :Shape(name, width, height) {}
    double getArea() { return 2 * width / 2 * height / 2; }
};
#endif // !_Oval_h