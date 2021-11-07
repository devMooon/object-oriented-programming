#ifndef _String_h
#define _String_h

#include <iostream>
using std::ostream;

class String
{
	int m_nLen;
	char* m_pStr;

public:
	String();
	String(const char* s);
	String(const String& s);
	~String();

	friend ostream& operator<<(ostream& os, const String& rightHand);
	int length();
	String& operator=(const String& s);
	String operator+(const String& s) const;
	bool operator==(const String& s) const;
	bool operator==(const char* s) const;
	char& operator[](const int index);
};

#endif // !_String_h