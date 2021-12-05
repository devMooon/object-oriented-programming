#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account(int accountNo, string name, int balance)
{
	this->accountNo = accountNo;
	this->name = name;
	this->balance = balance;
}
void Account::deposit(int amount)
{
	if (amount >= 0) {
		balance += amount;
	}
	else {
		cout << "������ �Ա��� �� �����ϴ�." << endl;
	}
}
int Account::withdraw(int amount)
{
	if (amount <= balance) {
		balance -= amount;
		cout << amount << "�� ��� �Ϸ�.�ܾ�: " << balance << endl;
		return amount;
	}
	else {
		cout << "�ܾ��� �����մϴ�." << endl;
		return 0;
	}
}
void Account::check()
{
	cout << name << "���� '" << accountNo << "' ���� �ܾ�: " << balance << endl;
}
