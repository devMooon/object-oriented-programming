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
	String(const char* pStr);
	String(const String& ref);
	~String();

	int length(void) const;
	String& operator=(const String& ref);
	String operator+(const String& ref);
	bool operator==(const String str)const;
	bool operator==(const char* str)const;
	char& operator[](int i);

	friend ostream& operator<<(ostream& os, const String& r);
};
#endif // !_String_h
