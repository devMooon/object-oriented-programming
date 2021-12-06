#define  _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

String::String(const char* str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}
String::String(const String& string)
{
	this->str = new char[strlen(string.str) + 1];
	strcpy(this->str, string.str);
}
String::~String()
{
	if (this->str = NULL) delete[] this->str;
}

int String::length() const
{
	return strlen(this->str);
}

String& String::operator=(const String& string)
{
	delete [] this->str;

	this->str = new char[strlen(string.str) + 1];
	strcpy(this->str, string.str);

	return *this;
}
ostream& operator<<(ostream& os, const String& string)
{
	return os << string.str;
}
String String::operator+(const String& string) const
{
	int newStrLength = strlen(string.str) + strlen(this->str) + 1;
	char* newStr = new char[newStrLength];

	strcpy(newStr, this->str);
	strcat(newStr, string.str);

	String s(newStr);
	return s;
}
bool String::operator==(const String& string) const
{
	if (strcmp(this->str, string.str) == 0) return true;
	else return false;
}
bool String::operator<(const String& string) const
{
	if (strcmp(this->str, string.str) < 0) return true;
	else return false;
}
char& String::operator[](int i) const
{
	if (i < 0 || i > strlen(this->str) - 1) {
		cout << "잘못된 접근: " << i << endl;
		exit(-1);
	}
	return this->str[i];
}