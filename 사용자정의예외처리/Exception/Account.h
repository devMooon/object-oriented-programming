#ifndef _Account_h
#define _Account_h
#include <iostream>
#include <string>

using std::string;

class Account
{
	int accountNo; //���¹�ȣ
	string name; //������ �̸�
	int balance; //�ܾ�

public:
	Account(int accountNo, string name);

	void deposit(int amount);
	int withdraw(int amount);
	void check();
};

#endif // !_Accoutn_h



