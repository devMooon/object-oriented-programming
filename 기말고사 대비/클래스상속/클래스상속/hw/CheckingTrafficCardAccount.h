#ifndef _CheckingTrafficCardAccount_h
#define _CheckingTrafficCardAccount_h
#include "CheckingAccount.h"
class CheckingTrafficCardAccount :
    public CheckingAccount
{
protected:
    bool hasTrafficCard;
public:
    CheckingTrafficCardAccount(int accountNo, string name, int balance, string cardNo, bool hasTrafficCard);
    
    int payTrafficCard(string cdNo, int amount);
};
#endif // !_CheckingTrafficCardAccount_h