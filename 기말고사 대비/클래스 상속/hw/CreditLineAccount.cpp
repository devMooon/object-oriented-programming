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
		cout << amount << "�� ��� �Ϸ�.�ܾ�: " << balance << endl;
		return amount;
	}
	else {
		cout << "�ܾ��� �����մϴ�." << endl;
		return 0;
	}
}