#define _CRT_SECURE_NO_WARNINGS
#include "Person.h"
#include <cstring>
#include <iostream>

using std::ostream;

Person::Person(const char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
Person::~Person()
{
	delete[] name;
}
Person::Person(const char& name)
{
	this->name = new char[strlen(&name) + 1];
	strcpy(this->name, &name);
}
Person& Person::operator=(const Person& person)
{
	if (this->name == NULL) delete[] this->name;

	this->name = new char[strlen(person.name) + 1];
	strcpy(this->name, person.name);

	return *this;
}
ostream& operator<<(ostream& os, const Person& person)
{
	os << person.name;
	return os;
}