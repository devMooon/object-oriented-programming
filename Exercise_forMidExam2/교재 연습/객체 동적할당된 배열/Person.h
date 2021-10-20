#ifndef _Person_h
#define _Person_h

class Person {
	char name[10];
	char tel[10];
public:
	Person();
	char[] getName() { return name; };
	char[] getTel() { return tel; };
	void set(char name[], char tel[]);
};
#endif // !_Person_h
