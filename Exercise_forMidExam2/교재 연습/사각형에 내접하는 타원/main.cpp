#include <iostream>
#include "Oval.h"

using std::cout;
using std::endl;

int main(void)
{
	Oval a;
	Oval b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}