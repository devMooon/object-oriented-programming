#ifndef _BalanceOutOfBoundsException_h
#define _BalanceOutOfBoundsException_h
#include "MyException.h"

class BalanceOutOfBoundsException : public MyException
{
	int amount;
public:
	BalanceOutOfBoundsException(int amount) : MyException("������� : �ܾ��� �ʰ��Ͽ����ϴ�."), amount(amount) {}
	string getMessage();
};

#endif // !_BalanceOutOfBoundsException_h