#include "CreditLineAccount.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

int CreditLineAccount::withdraw(int amount)
{
	if (amount <= balance + creditLine) {
		balance -= amount;
		return amount;
	}
	else {
		cout << "�ѵ� �ʰ�" << endl;
		return 0;
	}
}