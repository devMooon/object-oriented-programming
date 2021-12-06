#ifndef _Rectangle_h
#define _Rectangle_h
#include "Shape.h"
#include <string>

using std::ostream;

class Rectangle :
    public Shape
{
public:
    Rectangle(string type, int width, int height) :Shape(type, width, height) {}

    int getArea()const;
 
};
#endif // !_Rectangle_