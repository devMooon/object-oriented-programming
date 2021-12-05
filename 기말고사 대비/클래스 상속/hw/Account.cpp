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
		cout << "음수는 입금할 수 없습니다." << endl;
	}
}
int Account::withdraw(int amount)
{
	if (amount <= balance) {
		balance -= amount;
		cout << amount << "원 출금 완료.잔액: " << balance << endl;
		return amount;
	}
	else {
		cout << "잔액이 부족합니다." << endl;
		return 0;
	}
}
void Account::check()
{
	cout << name << "님의 '" << accountNo << "' 계좌 잔액: " << balance << endl;
}
