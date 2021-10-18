#include "Child.h"
#include <iostream>

using std::cout;
using std::endl;

Child::Child(int numOfBead)
{
	if (numOfBead < 0) {
		cout << "구슬은 0개 이하일 수 없습니다." << endl;
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
		cout << "구슬이 0개보다 적어서 게임을 시작할 수 없습니다." << endl;
		return;
	}
	if (losser.getNumOfBead() < numOfBead) {
		result = losser.getNumOfBead();
		cout << "상대방의 구슬을 0개보다 적게 만들 수 없어서 " << result << "개만 뺏어옵니다!" << endl;
	}
	winner.setNum(winner.getNumOfBead() + result);
	losser.setNum(losser.getNumOfBead() - result);

	cout << "winner: "; winner.showInfo();
	cout << "losser: "; losser.showInfo();
}
void Child::showInfo(void) const
{
	cout << "구슬 개수: " << numOfBead << endl;
}