#ifndef _String_h
#define _String_h

#include <cstring>
#include <iostream>

using std::ostream;

class String
{
	char* str;

public:
	String(const char* str = "");
	String(const String& string);
	~String();

	int length() const;

	String& operator=(const String& string);
	friend ostream& operator<<(ostream& os, const String& string);
	String operator+(const String& string)const;
	bool operator==(const String& string) const;
	bool operator<(const String& string) const;
	char& operator[](int i) const;
};
#endif // !_String_h