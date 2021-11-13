#include "UpAndDownGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int UpAndDownGame::num = rand() % 100; //0~99사이의 값
int UpAndDownGame::min = 0;
int UpAndDownGame::max = 99;

void UpAndDownGame::gameStart(const Person& p1, const Person& p2)
{
	cout << "Up & Down 게임을 시작합니다." << endl;
	while (true) {
		if (yourTurn(p1)) break;
		if (yourTurn(p2)) break;
	}
}
bool UpAndDownGame::yourTurn(const Person& p)
{
	int result;

	cout << "답은 " << min << "과 " << max << "사이에 있습니다." << endl;
	cout << p << ">>"; cin >> result;

	if (result == num) {
		cout << p << "가 이겼습니다!!" << endl;
		return true;
	}
	else {
		if (result > num) max = result;
		else min = result;

		return false;
	}
}
