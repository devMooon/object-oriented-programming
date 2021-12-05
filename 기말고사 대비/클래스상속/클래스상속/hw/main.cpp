#include <iostream>
#include <string>
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
	Account* account[size];
	for (int i = 0; i < size; i++) {
		account[i] = NULL;
	}

	account[0] = new BonusPointAccount(100, "Moon", 100);
	account[1] = new CheckingAccount(200, "Moon2", 200, "000");
	account[2] = new CheckingTrafficCardAccount(300, "Moon3", 300, "001", false);
	account[3] = new CreditLineAccount(400, "Moon4", 400, 1000);
	
	
	for (int i = 0; i < size; i++) {
		if (account[i] != NULL) {
			cout << i << "번 Test" << endl;
			account[i]->deposit(-1);
			account[i]->deposit(10000);
			account[i]->withdraw(-100);
			account[i]->withdraw(11000);
			account[i]->withdraw(3000);
			account[i]->check();
			cout << endl;

			CheckingAccount* ca = dynamic_cast<CheckingAccount*>(account[i]);
			if (ca != NULL) {
				cout << "CheckingAccount 객체 입니다" << endl;
				ca->pay("001", 5000);
				ca->pay("000", 5000);
				ca->check();
				cout << endl;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		if (account[i] != NULL) {
			cout << i << "번 동적할당해제" << endl;
			delete account[i];
		}
	}
	
	return 0;
}