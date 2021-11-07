#include<iostream>
#include "Account.h"
#include "CheckingAccount.h"
#include "CheckingTrafficCardAccount.h"
#include "CreditLineAccount.h"
#include "BonusPointAccout.h"

using std::cout;
using std::endl;

int main(void)
{
	//Account클래스 실험
	Account account(1, "문서연", 20000);
	account.deposit(1000); //안전
	account.withdraw(50000); //잔액이 부족한 경우
	account.withdraw(20000); //안전
	account.check();





	//CheckingAccount클래스 실험
	CheckingAccount checkCard(2, "문세라", 20000, "abc");
	checkCard.pay("-abc", 10000); //카드 번호가 다른 경우
	checkCard.pay("abc", 50000); //잔액이 부족한 경우
	checkCard.pay("abc", 10000); //안전
	checkCard.check();





	//CheckingTrafficCardAccount 클래스 실험
	CheckingTrafficCardAccount checkTrafficCard(3, "문우진", 20000, "ABC", false);
	//교통카드 미등록으로 모두 수행 불가
	checkTrafficCard.payTrafficCard("-ABC", 10000); //카드 번호가 다른 경우
	checkTrafficCard.payTrafficCard("ABC", 50000); //잔액이 부족한 경우
	checkTrafficCard.payTrafficCard("ABC", 1000); //안전

	checkTrafficCard.check();

	//교통카드 등록
	checkTrafficCard.registration();
	checkTrafficCard.payTrafficCard("-ABC", 10000); //카드 번호가 다른 경우
	checkTrafficCard.payTrafficCard("ABC", 50000); //잔액이 부족한 경우
	checkTrafficCard.payTrafficCard("ABC", 1000); //안전

	checkTrafficCard.check();





	//CreditLineAccount 클래스 실험
	CreditLineAccount creditLineCard(4, "김가람", 20000, 10000);
	creditLineCard.withdraw(21000); //안전 20000 - 21000 = -1000 //9000원 더 뺄 수 있음
	creditLineCard.deposit(1000); //안전 //10000원 더 뺄 수 있음
	creditLineCard.withdraw(10000); //안전
	creditLineCard.deposit(10000); //안전 //10000원 더 뺄 수 있음
	creditLineCard.withdraw(11000); //한도초과 //남은 잔액 0원

	creditLineCard.check();





	//BonusPointAccout 클래스 실험
	BonusPointAccout bonusPointCard(5, "박효림", 20000);
	bonusPointCard.deposit(10000); //보너스 100원 추가
	bonusPointCard.check();
}