#ifndef _Person_h
#define _Person_h
#include <iostream>

using std::ostream;

class Person
{
	char* name;

public:
	Person(const char* name);
	~Person();
	Person(const char& name);
	Person& operator=(const Person& person);
	friend ostream& operator<<(ostream& os, const Person& person);
};

#endif // !_Person_h