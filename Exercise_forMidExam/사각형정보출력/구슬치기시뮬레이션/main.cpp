#include <iostream>
#include "Child.h"

int main(void)
{
	Child c1(15);
	Child c2(9);

	c1.startGame(c1, c2, 2);
	c1.startGame(c2, c1, 7);
	c1.startGame(c1, c2, 20);
	return 0;
}