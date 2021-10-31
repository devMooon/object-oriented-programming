#include "String.h"
#include <iostream>

using std::cout;
using std::endl;

String::String():String("\0"){};
String::String(const char* string) 
{ 
	int i;
	int size;
	for (size = 0; string[size] != NULL; size++);

	this->m_pStr = new char[size];
	this->m_nLen = size;

	for (i = 0; i <= size; i++) {
		this->m_pStr[i] = string[i];
	}
}
String::String(const String& string)
{
	int i;

	this->m_pStr = new char[string.m_nLen];
	this->m_nLen = string.length();

	for (i = 0; i <= m_nLen; i++) {
		this->m_pStr[i] = string.m_pStr[i];
	}
}
int String::length(void) const
{
	return m_nLen;
}
ostream& operator<<(ostream& os, const String& rightHand)
{
	os << rightHand.m_pStr;
	return os;
}
char* String::operator=(const char* str)
{
	int i;
	int size;
	for (size = 0; str[size] != NULL; size++);

	delete[] this->m_pStr;
	this->m_pStr = new char[size];
	this->m_nLen = size;

	for (i = 0; i <= size; i++) {
		this->m_pStr[i] = str[i];
	}

	return m_pStr;
}
String String::operator+(const String str) const
{
	int size = m_nLen + str.m_nLen;
	String newStr;
	newStr.m_nLen = size;
	newStr.m_pStr = new char[size];


	for (int i = 0; i < m_nLen; i++) {
		newStr.m_pStr[i] = m_pStr[i];
	}
	for (int i = 0; i <= str.m_nLen; i++) {
		newStr.m_pStr[m_nLen + i] = str.m_pStr[i];
	}

	return newStr;
}
bool String::operator==(const String str)const
{
	if (m_nLen != str.m_nLen) return false;
	for (int i = 0; i < m_nLen; i++) {
		if (m_pStr[i] != str.m_pStr[i]) return false;
	}
	return true;	
}
bool String::operator==(const char* str)const
{
	int size;
	for (size = 0; str[size] != NULL; size++);

	if (m_nLen != size) return false;
	for (int i = 0; i < m_nLen; i++) {
		if (m_pStr[i] != str[i]) return false;
	}
	return true;
}
char& String::operator[](int i)
{
	if (i >= m_nLen) {
		cout << "배열을 벗어난 인덱스입니다." << endl;
		exit(-1);
	}
	return m_pStr[i];
}