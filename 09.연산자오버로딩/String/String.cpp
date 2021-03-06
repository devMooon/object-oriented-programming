#include "String.h"
#include <iostream>

using std::cout;
using std::endl;

String::String(const char* string) 
{ 
	cout << "생성자 호출" << endl;
	int i;
	int size;
	for (size = 0; string[size] != '\0'; size++);
	size++;

	m_pStr = new char[size];
	m_nLen = size;
	for (i = 0; i < size; i++){
		m_pStr[i] = string[i];
	}	
}
String::String(const String& string)
{
	cout << "복사 생성자 호출" << endl;

	int i;
	int size = string.length();
	this->m_pStr = new char[size];
	this->m_nLen = size;

	for (i = 0; i < size; i++) {
		this->m_pStr[i] = string.m_pStr[i];
	}
}
String::~String()
{
	cout << "소멸자 호출" << endl;
	delete[] m_pStr;
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
	for (size = 0; str[size] != '\0'; size++);
	size++;

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
	String newStr;
	newStr.m_nLen = m_nLen + str.m_nLen;
	newStr.m_pStr = new char[newStr.m_nLen];

	for (int i = 0; i < m_nLen - 1; i++) { //0'H' 1'E' 2'L' 3'L' 4'O'
		newStr.m_pStr[i] = m_pStr[i];
	}
	for (int i = 0; i < str.m_nLen; i++) {//0'H' 1'E' 2'L' 3'L' 4'O' 5'\0'
		newStr.m_pStr[m_nLen - 1 + i] = str.m_pStr[i];
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