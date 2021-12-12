#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account(int accountNo, string name, int balance)
	:accountNo(accountNo), name(name), balance(balance)
{

}
void Account::deposit(int amount)
{
	if (amount < 0) {
		cout << "���� �Ա�" << endl;
		exit(-1);
	}
	else {
		balance += amount;
	}
}
int Account::withdraw(int amount)
{
	if (amount < 0) {
		cout << "���� �Ա�" << endl;
		exit(-1);
	}
	else if(balance < amount) {
		cout << "�ܾ� ����" << endl;
		exit(-1);
	}
	else {
		balance -= amount;
	}
}
ostream& operator<<(ostream& os, const Account& account)
{
	return os << account.name << "���� " << account.accountNo << "������ �ܾ�: " << account.balance;
}