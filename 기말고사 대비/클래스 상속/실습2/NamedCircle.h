#ifndef _NamedCircle_h
#define _NamedCircle_h
#include "Circle.h"
#include <string>

using std::string;
using std::ostream;
using std::istream;

class NamedCircle :
    protected Circle
{
    string name;

public:
    NamedCircle(int radius = 0, string name = "");

    void setName(string name) { this->name = name; }
    void show() const;

    bool operator<(const NamedCircle& nc) const;
    friend ostream& operator<<(ostream& os, const NamedCircle& nc);
    friend istream& operator>>(istream& is, NamedCircle& nc);
};
#endif // !_NamedCircle_h



