#ifndef _String_h
#define _String_h
#include <cstring>
#include <iostream>

using std::ostream;

class String
{
	char* p_string;

public:
	String(const char* p_string = "\n");
	String(const String& string);
	~String();

	//������ �����ε�
	String& operator=(const String& string);
	String operator+(const String& string) const;
	bool operator==(const String& string) const;
	bool operator==(const char* p_string) const;
	char& operator[](int i) const;

	//friend �޼���
	friend ostream& operator<<(ostream& os, const String& string);
};

#endif // !_String_h