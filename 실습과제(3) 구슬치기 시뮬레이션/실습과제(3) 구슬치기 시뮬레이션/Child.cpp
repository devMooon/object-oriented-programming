#include "Child.h"
#include <iostream>

Child::Child(void)
	:Child(0) {};

Child::Child(int bead) 
{
	if (setBead(bead)) {}
	else {
		std::cout << "������ 0�� �̻��̾�� �մϴ�!";
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
	std::cout << "���� ���� : " << bead << std::endl;
};
void Child::win(Child *loser, int bead)
{
	int beadNum;
	if (loser->setBead(loser->getBead() - bead)) {
		beadNum = bead;
	}
	else {
		std::cout << "������ 0�� ���� �۾��� �� ���� �ּ� ������ " << loser->getBead() << "���� ����ϴ�!\n";
		beadNum = loser->getBead();
		loser->setBead(0);
	}
	setBead(getBead() + beadNum);
};
void Child::lose(Child *winner, int bead)
{
	winner->win(this, bead);
};
