#include "MalformedData.h"
#include "MyException.h"
#include <iostream>
#include <string>

using std::to_string;

string MalformedData::getMessage()
{
	return MyException::getMessage() + " : " + to_string(amount);
}