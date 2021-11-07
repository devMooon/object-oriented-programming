#define _CRT_SECURE_NO_WARNINGS
#include "String.h"
#include <iostream>
#include <cstring>
using namespace std;


String::String()
{
    m_nLen = 0;
    m_pStr = NULL;
}

String::String(const char* pStr)
{
    m_nLen = strlen(pStr) + 1;
    m_pStr = new char[m_nLen];
    strcpy(m_pStr, pStr);
}

String::String(const String& ref)
{
    m_nLen = ref.m_nLen;
    m_pStr = new char[m_nLen];
    strcpy(m_pStr, ref.m_pStr);
}

String::~String()
{
    if (m_pStr != NULL)
        delete[]m_pStr;
}
int String::length(void) const
{
    return m_nLen;
}

String& String::operator=(const String& ref)
{
    if (m_pStr != NULL)
        delete[]m_pStr;

    m_nLen = ref.m_nLen;
    m_pStr = new char[m_nLen];
    strcpy(m_pStr, ref.m_pStr);

    return *this;
}

String String::operator+(const String& ref)
{
    char* tStr = new char[m_nLen + ref.m_nLen - 1];

    strcpy(tStr, m_pStr);
    strcat(tStr, ref.m_pStr);

    String temp(tStr);
    delete[]tStr;
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

ostream& operator<<(ostream& os, const String& ref)
{
    if (ref.m_pStr == NULL) return os << "";
    else return os << ref.m_pStr;
}
