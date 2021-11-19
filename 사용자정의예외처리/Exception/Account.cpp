#include "Account.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

Account::Account(int accountNo, string name) : accountNo(accountNo), name(name), balance(100) {
	cout << " ************ ���� ���� ************" << endl;
	this->check();
	cout << " ***********************************\n\n";
}
void Account::deposit(int amount) throw(MalformedData&)
{
	cout << "* " << amount << "�� �Ա� �õ�.." << endl;
	if (amount < 0) throw MalformedData(amount);
	balance += amount;
	cout << amount << "�� �Ա� ����." << endl << endl;
}
int Account::withdraw(int amount) throw (MalformedData&, BalanceOutOfBoundsException&)
{
	cout << "* " << amount << "�� ��� �õ�.." << endl;
	if (amount < 0) throw MalformedData(amount);
	if ((balance - amount) < 0) throw BalanceOutOfBoundsException(amount);
	
	balance -= amount;
	cout << amount << "�� ��� ����." << endl << endl;

	return amount;
}
void Account::check()
{
	cout << "<< " + name + "���� " + "'" + to_string(accountNo) + "'" + "���� �ܾ� : " + to_string(balance) + " >>\n";
}