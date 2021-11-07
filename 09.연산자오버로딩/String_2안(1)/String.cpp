#include "String.h"
#include <iostream>

using std::cout;
using std::endl;

String::String()
{
	this->m_nLen = 0;
	this->m_pStr = NULL;
}
String::String(const char* string)
{
	int i;
	int size;
	for (size = 0; string[size] != '\0'; size++);

	m_pStr = new char[size + 1];
	m_nLen = size;
	for (i = 0; i < size + 1; i++) {
		m_pStr[i] = string[i];
	}
}
String::String(const String& string)
{
	int i;
	int size = string.m_nLen;

	this->m_pStr = new char[size + 1];
	this->m_nLen = size;

	for (i = 0; i < size + 1; i++) {
		this->m_pStr[i] = string.m_pStr[i];
	}
}

String::~String()
{
	if (m_pStr != NULL)
		delete[] m_pStr;
}
int String::length(void) const
{
	return m_nLen;
}
ostream& operator<<(ostream& os, const String& rightHand)
{
	if (rightHand.m_pStr == NULL) return os << "";
	return os << rightHand.m_pStr;
}



char* String::operator=(const char* str)
{
	int i;
	int size;
	for (size = 0; str[size] != '\0'; size++);
	size++;

	if(this->m_pStr != NULL)
		delete[] this->m_pStr;
	this->m_pStr = new char[size];
	this->m_nLen = size;

	for (i = 0; i < size; i++) {
		this->m_pStr[i] = str[i];
	}

	return m_pStr;
}
String String::operator+(const String str) const
{
	char* c = new char[m_nLen + str.m_nLen + 1];

	for (int i = 0; i < m_nLen; i++) {//0'H' 1'E' 2'L' 3'L' 4'O'
		c[i] = m_pStr[i];
	}
	for (int i = 0; i < str.m_nLen + 1; i++) {//0'H' 1'E' 2'L' 3'L' 4'O' 5'\0'
		c[m_nLen + i] = str.m_pStr[i];
	}

	String temp(c);
	delete[] c;

	return temp;
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
	for (size = 0; str[size] != '\0'; size++);

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