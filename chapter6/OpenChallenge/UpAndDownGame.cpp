#include "UpAndDownGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int UpAndDownGame::num = rand() % 100; //0~99������ ��
int UpAndDownGame::min = 0;
int UpAndDownGame::max = 99;

void UpAndDownGame::gameStart(const Person& p1, const Person& p2)
{
	cout << "Up & Down ������ �����մϴ�." << endl;
	while (true) {
		if (yourTurn(p1)) break;
		if (yourTurn(p2)) break;
	}
}
bool UpAndDownGame::yourTurn(const Person& p)
{
	int result;

	cout << "���� " << min << "�� " << max << "���̿� �ֽ��ϴ�." << endl;
	cout << p << ">>"; cin >> result;

	if (result == num) {
		cout << p << "�� �̰���ϴ�!!" << endl;
		return true;
	}
	else {
		if (result > num) max = result;
		else min = result;

		return false;
	}
}
