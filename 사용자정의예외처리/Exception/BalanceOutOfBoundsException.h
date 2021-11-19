#ifndef _BalanceOutOfBoundsException_h
#define _BalanceOutOfBoundsException_h
#include "MyException.h"

class BalanceOutOfBoundsException : public MyException
{
	int amount;
public:
	BalanceOutOfBoundsException(int amount) : MyException("인출오류 : 잔액을 초과하였습니다."), amount(amount) {}
	string getMessage();
};

#endif // !_BalanceOutOfBoundsException_h