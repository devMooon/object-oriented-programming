#ifndef _NamedCircle_h
#define _NamedCircle_h
#include "Circle.h"
#include <string>

using std::string;

class NamedCircle : public Circle
{
    string name;
public:
    NamedCircle(int radius, string name) :Circle(radius), name(name) {}

    friend ostream& operator<<(ostream& os, const NamedCircle& c);
};

#endif // !_NamedCircle_h