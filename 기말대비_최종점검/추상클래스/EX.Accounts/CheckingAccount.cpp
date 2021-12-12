#include "CheckingAccount.h"

int CheckingAccount::pay(string cardNo, int mount)
{
	if (this->cardNo == cardNo) {
		this->withdraw(mount);
	}
}

ostream& operator<<(ostream& os, const CheckingAccount& account)
{
	return os << account.name << "���� " << account.accountNo << "������ �ܾ�: " << account.balance;

}