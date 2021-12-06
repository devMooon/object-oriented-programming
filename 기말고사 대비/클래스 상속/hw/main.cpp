#include <iostream>
#include <string>
#include "AccountList.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccount.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
const int size = 10;

int main(void)
{
	AccountList accounts(10);

	BonusPointAccount* bpa1 = new BonusPointAccount(100, "Moon", 100);
	CheckingAccount* ca = new CheckingAccount(200, "Moon2", 200, "000");
	CheckingTrafficCardAccount* cta = new CheckingTrafficCardAccount(300, "Moon3", 300, "001", false);
	CreditLineAccount* cla = new CreditLineAccount(400, "Moon4", 400, 1000);
	BonusPointAccount* bpa2 = new BonusPointAccount(100, "Moon", 100);

	accounts.push(bpa1);
	accounts.push(ca);
	accounts.push(cta);
	accounts.push(cla);
	accounts.push(bpa2);
	
	for (int i = 0; i < accounts.realSize; i++) {
		cout << i << "번 Test" << endl;
		accounts[i].deposit(-1);
		accounts[i].deposit(10000);
		accounts[i].withdraw(-100);
		accounts[i].withdraw(11000);
		accounts[i].withdraw(3000);
		accounts[i].check();
		cout << endl;

		CheckingAccount* ca = dynamic_cast<CheckingAccount*>(&accounts[i]);
		if (ca != NULL) {
			cout << "CheckingAccount 객체 입니다" << endl;
			ca->pay("001", 5000);
			ca->pay("000", 5000);
			ca->check();
			cout << endl;
		}
	}

	return 0;
}