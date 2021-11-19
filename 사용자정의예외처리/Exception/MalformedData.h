#ifndef _MalformedData_h
#define _MalformedData_h
#include "MyException.h"

class MalformedData : public MyException
{
	int amount;

public:
	MalformedData(int amount) : MyException("오류: 잘못된 금액입니다."), amount(amount) {}
	string getMessage();
};
#endif // !_MalformedData_h



