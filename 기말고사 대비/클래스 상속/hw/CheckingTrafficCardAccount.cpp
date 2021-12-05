#include "CheckingTrafficCardAccount.h"
#include "CheckingAccount.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, string name, int balance, string cardNo, bool hasTrafficCard)
	:CheckingAccount(accountNo, name, balance, cardNo)
{
	this->hasTrafficCard = hasTrafficCard;
}

int CheckingTrafficCardAccount::payTrafficCard(string cdNo, int amount)
{
	if (this->hasTrafficCard) {
		return pay(cdNo, amount);
	}
	else {
		cout << "����ī�尡 ��ϵ��� �ʾҽ��ϴ�." << endl;
		return 0;
	}
}