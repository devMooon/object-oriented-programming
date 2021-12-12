#ifndef _ColorPoint_h
#define _ColorPoint_h
#include "Point.h"
#include <string>

using std::string;

class ColorPoint :
    public Point
{
    string color;
public:
    ColorPoint(int x, int y, string color) :Point(x, y), color(color) {}

    void show();
    void draw();
};
#endif // !_ColorPoint_h