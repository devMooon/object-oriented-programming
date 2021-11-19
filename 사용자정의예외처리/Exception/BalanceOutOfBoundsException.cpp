#include "BalanceOutOfBoundsException.h"
#include "MyException.h"
#include <iostream>
#include <string>

using std::to_string;

string BalanceOutOfBoundsException::getMessage()
{
	return MyException::getMessage() + " : " + to_string(amount);
}