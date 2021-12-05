#include "CheckingAccount.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

CheckingAccount::CheckingAccount(int accountNo, string name, int balance, string cardNo)
    :Account(accountNo, name, balance)
{
    this->cardNo = cardNo;
}
int CheckingAccount::pay(string cardNo, int amount)
{
    if (this->cardNo == cardNo) {
        return withdraw(amount);
    }
    else {
        cout << "카드 번호가 잘못 되었습니다." << endl;
        return 0;
    }
}