#ifndef _Person_h
#define _Person_h

#include <iostream>
using std::cout;
using std::endl;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name); //생성자
	Person(const Person& p);//복사 생성자
	~Person();//소멸자

	void changeName(const char* name);
	void show() { cout << id << ", " << name << endl; };
};
#endif // !_Person_h
