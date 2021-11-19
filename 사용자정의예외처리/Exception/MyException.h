#ifndef _MyException_h
#define _MyException_h
#include <iostream>
#include <string>

using std::cout;
using std::string;

class MyException
{
	string message;
public:
	MyException() : message("¿À·ù") {};
	MyException(string message) : message(message) {};
	virtual string getMessage() { return message; };
};

#endif // !_MyException_h



