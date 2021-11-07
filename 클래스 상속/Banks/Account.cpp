#include "Account.h"
#include <iostream>

using std::cout;
using std::endl;

Account::Account(int accountNo, String name, int balance): accountNo(accountNo), name(name), balance(balance){}
void Account::deposit(int amount)
{
	balance += amount;
}
int Account::withdraw(int amount)
{
	if (amount <= balance) {
		balance -= amount;
		return amount;
	}
	else {
		cout << "�ܾ� ����" << endl;
		return 0;
	}
}
void Account::check()
{
	cout << endl;
	cout << "****** ���� ���� ******" << endl;
	cout << " ������:\t" << name << endl;
	cout << " ���¹�ȣ:\t" << accountNo << endl;
	cout << " �ܾ�:\t\t" << balance << endl;
}
