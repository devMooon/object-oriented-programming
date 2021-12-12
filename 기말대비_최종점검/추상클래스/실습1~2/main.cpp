#include "NamedCircle.h"
#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	NamedCircle waffle(3, "waffle");
	cout << waffle << endl;
	return 0;
}