#pragma once
#include "Account.h"
#include <string>

class BonusPointAccount :
    public Account
{
protected:
    int bonusPoint;
public:
    BonusPointAccount(int accountNo, string name, int balance);

    void deposit(int amount);
    void check();
};

