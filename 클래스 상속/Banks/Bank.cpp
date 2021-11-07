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
	//AccountŬ���� ����
	Account account(1, "������", 20000);
	account.deposit(1000); //����
	account.withdraw(50000); //�ܾ��� ������ ���
	account.withdraw(20000); //����
	account.check();





	//CheckingAccountŬ���� ����
	CheckingAccount checkCard(2, "������", 20000, "abc");
	checkCard.pay("-abc", 10000); //ī�� ��ȣ�� �ٸ� ���
	checkCard.pay("abc", 50000); //�ܾ��� ������ ���
	checkCard.pay("abc", 10000); //����
	checkCard.check();





	//CheckingTrafficCardAccount Ŭ���� ����
	CheckingTrafficCardAccount checkTrafficCard(3, "������", 20000, "ABC", false);
	//����ī�� �̵������ ��� ���� �Ұ�
	checkTrafficCard.payTrafficCard("-ABC", 10000); //ī�� ��ȣ�� �ٸ� ���
	checkTrafficCard.payTrafficCard("ABC", 50000); //�ܾ��� ������ ���
	checkTrafficCard.payTrafficCard("ABC", 1000); //����

	checkTrafficCard.check();

	//����ī�� ���
	checkTrafficCard.registration();
	checkTrafficCard.payTrafficCard("-ABC", 10000); //ī�� ��ȣ�� �ٸ� ���
	checkTrafficCard.payTrafficCard("ABC", 50000); //�ܾ��� ������ ���
	checkTrafficCard.payTrafficCard("ABC", 1000); //����

	checkTrafficCard.check();





	//CreditLineAccount Ŭ���� ����
	CreditLineAccount creditLineCard(4, "�谡��", 20000, 10000);
	creditLineCard.withdraw(21000); //���� 20000 - 21000 = -1000 //9000�� �� �� �� ����
	creditLineCard.deposit(1000); //���� //10000�� �� �� �� ����
	creditLineCard.withdraw(10000); //����
	creditLineCard.deposit(10000); //���� //10000�� �� �� �� ����
	creditLineCard.withdraw(11000); //�ѵ��ʰ� //���� �ܾ� 0��

	creditLineCard.check();





	//BonusPointAccout Ŭ���� ����
	BonusPointAccout bonusPointCard(5, "��ȿ��", 20000);
	bonusPointCard.deposit(10000); //���ʽ� 100�� �߰�
	bonusPointCard.check();
}