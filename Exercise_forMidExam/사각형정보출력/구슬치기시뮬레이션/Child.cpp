#include "Child.h"
#include <iostream>

using std::cout;
using std::endl;

Child::Child(int numOfBead)
{
	if (numOfBead < 0) {
		cout << "������ 0�� ������ �� �����ϴ�." << endl;
		this->numOfBead = -1;
	}
	else this->numOfBead = numOfBead;
}
void Child::setNum(int numOfBead)
{
	this->numOfBead = numOfBead;
}
void Child::startGame(Child& winner, Child& losser, int numOfBead)
{
	int result = numOfBead;
	if (losser.getNumOfBead() < 0 || winner.getNumOfBead() < 0) {
		cout << "������ 0������ ��� ������ ������ �� �����ϴ�." << endl;
		return;
	}
	if (losser.getNumOfBead() < numOfBead) {
		result = losser.getNumOfBead();
		cout << "������ ������ 0������ ���� ���� �� ��� " << result << "���� ����ɴϴ�!" << endl;
	}
	winner.setNum(winner.getNumOfBead() + result);
	losser.setNum(losser.getNumOfBead() - result);

	cout << "winner: "; winner.showInfo();
	cout << "losser: "; losser.showInfo();
}
void Child::showInfo(void) const
{
	cout << "���� ����: " << numOfBead << endl;
}