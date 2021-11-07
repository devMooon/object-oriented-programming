#include "CheckingTrafficCardAccount.h"
#include "CheckingAccount.h"
#include <iostream>

using std::cout;
using std::endl;

CheckingTrafficCardAccount::CheckingTrafficCardAccount(int accountNo, String name, int balance, String cardNo, bool hasTrafficCard):CheckingAccount(accountNo, name, balance, cardNo), hasTrafficCard(hasTrafficCard){}
int CheckingTrafficCardAccount::payTrafficCard(String cdNo, int amount)
{
	if (hasTrafficCard == true) return CheckingAccount::pay(cdNo, amount);
	else {
		cout << "����ī�� �̵��" << endl;
		return 0;
	}
}
void CheckingTrafficCardAccount::registration(void) {

	if (hasTrafficCard == true) hasTrafficCard = false;
	else hasTrafficCard = true;
}
