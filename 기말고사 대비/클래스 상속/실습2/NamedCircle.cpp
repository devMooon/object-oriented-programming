#include "NamedCircle.h"
#include "Circle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::istream;

NamedCircle::NamedCircle(int radius, string name)
	:Circle(radius)
{
	this->name = name;
}

void NamedCircle::show() const
{
	cout << "[" << name << "] >> ";
	Circle::show();
}
bool NamedCircle::operator<(const NamedCircle& nc) const
{
	if (this->getArea() < nc.getArea()) return true;
	else return false;
}
ostream& operator<<(ostream& os, const NamedCircle& nc)
{
	return os << nc.name << "(" << nc.getRadius() << "/" << nc.getArea() << ")";
}
istream& operator>>(istream& is, NamedCircle& nc)
{
	int radius;
	string name;

	cin >> radius >> name;

	nc.setRadius(radius);
	nc.setName(name);

	return is;
}