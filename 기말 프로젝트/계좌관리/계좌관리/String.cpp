#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "String.h"

#include <iostream>

using std::ostream;
using std::cerr;
using std::endl;

String::String(const char* p_string)
{
	this->p_string = new char[strlen(p_string) + 1];
	strcpy(this->p_string, p_string);
}
String::String(const String& string)
{
	this->p_string = new char[strlen(string.p_string) + 1];
	strcpy(this->p_string, string.p_string);
}
String::~String()
{
	if(this->p_string != NULL) delete[] p_string;
}


//연산자 오버로딩
String& String::operator=(const String& string)
{
	delete[] this->p_string;

	this->p_string = new char[strlen(string.p_string) + 1];
	strcpy(this->p_string, string.p_string);

	return *this;
}
String String::operator+(const String& string) const
{
	char* newStr = new char[strlen(string.p_string) + strlen(this->p_string) + 1];

	strcpy(newStr, this->p_string);
	strcat(newStr, string.p_string);

	String temp(newStr);

	delete[] newStr;

	return temp;
}
bool String::operator==(const String& string) const
{
	if (strcmp(this->p_string, string.p_string) == 0) return true;
	else return false;
}
bool String::operator==(const char* p_string) const
{
	if (strcmp(this->p_string, p_string) == 0) return true;
	else return false;
}
char& String::operator[](int i) const
{
	try {
		if (i < 0 || i > strlen(this->p_string) - 1) throw "잘못된 접근입니다.";
		return (this->p_string)[i];
	}
	catch (const char* string) {
		cerr << string;
		char ch = ' ';
		return ch;
	}
}

//friend 메서드
ostream& operator<<(ostream& os, const String& string)
{
	return os << string.p_string;
}