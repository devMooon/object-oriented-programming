#ifndef _CheckingAccount_h
#define _CheckingAccount_h
#include "Account.h"
#include <string>

using std::string;

class CheckingAccount :
    public Account
{
protected:
    string cardNo;

public:
    CheckingAccount(int accountNo, string name, int balance, string cardNo);
    int pay(string cardNo, int amount);
};
#endif // !_CheckingAccount_h