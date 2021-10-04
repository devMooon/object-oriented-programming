#include "Child.h"
#include <iostream>

void showGame(Child c1, Child c2, int round);

int main(void)
{
	Child c1(15);
	Child c2(9);

	showGame(c1, c2, 0);
	c1.win(&c2, 2);
	showGame(c1, c2, 1);
	c2.win(&c1, 7);
	showGame(c1, c2, 2);
	c2.lose(&c1, 15);
	showGame(c1, c2, 3);
	c1.lose(&c2, 3);
	showGame(c1, c2, 4);
}
void showGame(Child c1, Child c2, int round)
{
	std::cout << "***** " << round << "라운드 게임의 결과" << std::endl;
	std::cout << "어린이1 ";
	c1.showInfo();
	std::cout << "어린이2 ";
	c2.showInfo();

	std::cout << std::endl;
}