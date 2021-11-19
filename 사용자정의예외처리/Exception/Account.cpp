#include "Account.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

Account::Account(int accountNo, string name) : accountNo(accountNo), name(name), balance(100) {
	cout << " ************ 계좌 생성 ************" << endl;
	this->check();
	cout << " ***********************************\n\n";
}
void Account::deposit(int amount) throw(MalformedData&)
{
	cout << "* " << amount << "원 입금 시도.." << endl;
	if (amount < 0) throw MalformedData(amount);
	balance += amount;
	cout << amount << "원 입금 성공." << endl << endl;
}
int Account::withdraw(int amount) throw (MalformedData&, BalanceOutOfBoundsException&)
{
	cout << "* " << amount << "원 출금 시도.." << endl;
	if (amount < 0) throw MalformedData(amount);
	if ((balance - amount) < 0) throw BalanceOutOfBoundsException(amount);
	
	balance -= amount;
	cout << amount << "원 출금 성공." << endl << endl;

	return amount;
}
void Account::check()
{
	cout << "<< " + name + "님의 " + "'" + to_string(accountNo) + "'" + "계좌 잔액 : " + to_string(balance) + " >>\n";
}