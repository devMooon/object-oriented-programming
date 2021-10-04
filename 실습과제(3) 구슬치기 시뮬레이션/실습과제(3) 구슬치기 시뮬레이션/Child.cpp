#include "Child.h"
#include <iostream>

Child::Child(void)
	:Child(0) {};

Child::Child(int bead) 
{
	if (setBead(bead)) {}
	else {
		std::cout << "구슬은 0개 이상이어야 합니다!";
	}
};
bool Child::setBead(int bead)
{
	if (bead < 0) {
		return false;
	}
	else {
		Child::bead = bead;
		return true;
	}
};
void Child::showInfo(void) const
{
	std::cout << "구슬 개수 : " << bead << std::endl;
};
void Child::win(Child *loser, int bead)
{
	int beadNum;
	if (loser->setBead(loser->getBead() - bead)) {
		beadNum = bead;
	}
	else {
		std::cout << "구슬은 0개 보다 작아질 수 없어 최소 개수인 " << loser->getBead() << "개만 뺏어갑니다!\n";
		beadNum = loser->getBead();
		loser->setBead(0);
	}
	setBead(getBead() + beadNum);
};
void Child::lose(Child *winner, int bead)
{
	winner->win(this, bead);
};
