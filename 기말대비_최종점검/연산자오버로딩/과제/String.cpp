#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

String::String(const char* string)
{
	this->str = new char[strlen(string) + 1];
	strcpy(this->str, string);
}
String::String(const String& string)
{
	this->str = new char[strlen(string.str) + 1];
	strcpy(this->str, string.str);
}
String::~String()
{
	delete[] this->str;
}
String& String::operator=(const String& string)
{
	delete[] this->str;

	this->str = new char[strlen(string.str) + 1];
	strcpy(this->str, string.str);

	return *this;
}


int String::length()
{
	return strlen(this->str);
}
String String::operator+(const String& string) const
{
	char* newStr = new char[strlen(this->str) + strlen(string.str) + 1];
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
bool String::operator==(const char* str) const
{
	if (strcmp(this->str, str) == 0) return true;
	else return false;
}
char& String::operator[](int i)
{
	if (i < 0 && i < this->length() - 1) {
		cout << "잘못된 접근" << endl;
		exit(-1);
	}
	else {
		return this->str[i];
	}
}


ostream& operator<<(ostream& os, const String& string)
{
	return os << string.str;
}