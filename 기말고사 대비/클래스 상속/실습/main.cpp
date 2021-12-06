#include "Shape.h"
#include "Oval.h"
#include "Rect.h"
#include "Triangular.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	Shape* shapes[3];

	shapes[0] = new Oval("ºó´ë¶±", 10, 20);
	shapes[1] = new Rect("Âû¶±", 30, 40);
	shapes[2] = new Triangular("Åä½ºÆ®", 30, 40);

	for (int i = 0; i < 3; i++) {
		cout << shapes[i]->getName() << " ³ÐÀÌ´Â " << shapes[i]->getArea() << endl;
	}

	for (int i = 0; i < 3; i++) delete shapes[i];
	return 0;
}