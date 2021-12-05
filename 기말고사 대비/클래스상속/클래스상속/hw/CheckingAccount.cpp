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
        cout << "ī�� ��ȣ�� �߸� �Ǿ����ϴ�." << endl;
        return 0;
    }
}