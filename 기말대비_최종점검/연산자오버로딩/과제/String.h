#ifndef _String_h
#define _String_h
#include <cstring>
#include <iostream>

using std::ostream;

class String
{
	char* str;
public:
	String(const char* string = "");
	String(const String& string);
	~String();
	String& operator=(const String& string);

	int length();
	String operator+(const String& string) const;
	bool operator==(const String& string) const;
	bool operator==(const char* str) const;
	char& operator[](int i);

	friend ostream& operator<<(ostream& os, const String& string);
};
#endif // !_String_h