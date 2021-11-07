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
		cout << "한도 초과" << endl;
		return 0;
	}
}