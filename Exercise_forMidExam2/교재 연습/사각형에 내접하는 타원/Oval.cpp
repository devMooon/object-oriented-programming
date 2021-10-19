#include "Oval.h"
#include <iostream>
using std::cout;
using std::endl;

void Oval::set(int w, int h)
{
	width = w;
	height = h;
}
void Oval::show(void) const
{
	cout << "width = " << width << ", height = " << height << endl;
}