#ifndef _Book_h
#define _Book_h

#include <iostream>

using std::cout;
using std::endl;

class Book {
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(const Book& book);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << " " << price << "¿ø" << endl; };

};
#endif // !_Book_h
