#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <cstring>

#include <iostream>
using std::ostream;
using std::cout;

String::String() : String("") {}
String::String(const char* s)
{
	m_nLen = strlen(s);
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s);	
}
String::String(const String& s)
{
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s.m_pStr);
}
String::~String()
{
	delete[] m_pStr;
}
ostream& operator<<(ostream& os, const String& rightHand)
{
	return os << rightHand.m_pStr;
}
int String::length()
{
	return m_nLen;
}
String& String::operator=(const String& s)
{
	if (m_pStr != NULL) delete[] m_pStr;
	m_nLen = s.m_nLen;
	m_pStr = new char[m_nLen + 1];

	strcpy(m_pStr, s.m_pStr);

	return *this;
}
String String::operator+(const String& s) const
{
	String newStr;
	newStr.m_nLen = m_nLen + s.m_nLen;
	newStr.m_pStr = new char[newStr.m_nLen + 1];
	strcpy(newStr.m_pStr, m_pStr);
	strcat(newStr.m_pStr, s.m_pStr);

	return newStr;
}
bool String::operator==(const String& s) const
{
	if (strcmp(m_pStr, s.m_pStr) == 0) return true;
	else return false;
}
bool String::operator==(const char* s) const
{
	if (strcmp(m_pStr, s) == 0) return true;
	else return false;
}
char& String::operator[](const int index)
{
	if (index < 0 || index >= m_nLen) {
		cout << "배열의 요소를 벗어났습니다.";
		exit(-1);
	}
	else return m_pStr[index];
}