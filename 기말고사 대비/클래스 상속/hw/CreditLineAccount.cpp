#include "CreditLineAccount.h"
#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

CreditLineAccount::CreditLineAccount(int accountNo, string name, int balance, int creditLine)
	:Account(accountNo, name, balance)
{
	this->creditLine = creditLine;
}

int CreditLineAccount::withdraw(int amount)
{
	if (amount <= (balance + creditLine)) {
		balance -= amount;
		cout << amount << "원 출금 완료.잔액: " << balance << endl;
		return amount;
	}
	else {
		cout << "잔액이 부족합니다." << endl;
		return 0;
	}
}