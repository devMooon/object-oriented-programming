//��ǻ�Ͱ������� 20200675 ������
#include "Child.h"
#include <iostream>

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
		this->bead = bead;
		return true;
	}
};
void Child::win(Child *loser, int bead)
{
	int beadNum; //���� ����� ��
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