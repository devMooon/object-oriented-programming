#include "Account.h"
#include "MalformedData.h"
#include "BalanceOutOfBoundsException.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	int money = 0;
	Account account_001(100, "������");

	try {
		//account_001.deposit(-10000); //���� �Ա����� MalformedData ���� ��ü�� ���� ����											�����ܾ� 100.	�������� 0.
		//money += account_001.withdraw(-5000); //���� ������� MalformedData ���� ��ü�� ���� ����									�����ܾ� 100.	�������� 0.
		account_001.deposit(10000); //�Ա� ����.																					�����ܾ� 10100.	�������� 0.
		money += account_001.withdraw(5000); //��� ����.																			�����ܾ� 5100.	�������� 5000.
		//money += account_001.withdraw(15000); //�ܾ��� ����� ������� BalanceOutOfBoundsException ���� ��ü�� ���� ����		�����ܾ� 5100.	�������� 5000.
	}
	catch (MalformedData& e) {
		cout << e.getMessage() << endl;
	}
	catch (BalanceOutOfBoundsException& e) {
		cout << e.getMessage() << endl;
	}
	cout << endl << "---��---" << endl;

	account_001.check();
	cout << "���� ���� : " << money << endl;
}