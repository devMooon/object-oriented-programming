#include "Account.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	int money = 0;
	Account account_001(100, "문서연");

	try {
		//account_001.deposit(-10000); //음수 입금으로 MalformedData 예외 객체를 전달 받음											계좌잔액 100.	보유현금 0.
		//money += account_001.withdraw(-5000); //음수 출금으로 MalformedData 예외 객체를 전달 받음									계좌잔액 100.	보유현금 0.
		account_001.deposit(10000); //입금 성공.																					계좌잔액 10100.	보유현금 0.
		money += account_001.withdraw(5000); //출금 성공.																			계좌잔액 5100.	보유현금 5000.
		//money += account_001.withdraw(15000); //잔액을 벗어나는 출금으로 BalanceOutOfBoundsException 예외 객체를 전달 받음		계좌잔액 5100.	보유현금 5000.
	}
	catch (MalformedData& e) {
		cout << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << e.getMessage() << endl;
	}
	cout << endl << "---끝---" << endl;

	account_001.check();
	cout << "보유 현금 : " << money << endl;
}