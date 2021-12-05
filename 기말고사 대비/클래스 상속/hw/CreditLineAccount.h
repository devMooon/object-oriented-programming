#pragma once
#include "Account.h"
class CreditLineAccount :
    public Account
{
protected:
    int creditLine;
public:
    CreditLineAccount(int accountNo, string name, int balance, int creditLine);

    int withdraw(int amount);

};

