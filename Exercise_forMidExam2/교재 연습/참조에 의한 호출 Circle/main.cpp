#include "Circle.h"

void increaseBy(Circle &a, Circle &b)
{
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}
int main(void)
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}