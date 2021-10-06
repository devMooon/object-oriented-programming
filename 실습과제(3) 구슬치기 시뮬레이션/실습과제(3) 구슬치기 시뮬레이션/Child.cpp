//컴퓨터공학전공 20200675 문서연
#include "Child.h"
#include <iostream>

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
		this->bead = bead;
		return true;
	}
};
void Child::win(Child *loser, int bead)
{
	int beadNum; //실제 뺏기는 값
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