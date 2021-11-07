#ifndef _String_h
#define _String_h

#include <iostream>
using std::ostream;

class String {
private:
	int m_nLen; //"\0"�� ������ ������ ���ڿ��� ���̸� ����
	char* m_pStr; //�������� ������ ���ڿ��� ����Ŵ

public:
	String();
	String(const char* string);
	String(const String& string);
	~String();
	int length(void) const;
	friend ostream& operator<<(ostream& os, const String& rightHand);
	char* operator=(const char* str);
	String operator+(const String str) const;
	bool operator==(const String str)const;
	bool operator==(const char* str)const;
	char& operator[](int i);
};
#endif // !_String_h
