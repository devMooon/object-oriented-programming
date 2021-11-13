#ifndef _Book_h
#define _Book_h
#include <iostream>

using std::ostream;

class Book
{
	char* title;
	int price;
	int pages;
public:
	Book(const char* title = "", int price = 0, int pages = 0);
	Book(const Book& book);
	~Book();
	void show() const;
	char* getTitle() const;

	Book operator+=(const int price);
	Book operator-=(const int price);
	bool operator==(const int price) const;
	bool operator==(const char* title) const;
	bool operator==(const Book& book) const;
	Book& operator=(const Book& book);
	friend ostream& operator<<(ostream& os, const Book& book);
};

#endif // !_Book_h