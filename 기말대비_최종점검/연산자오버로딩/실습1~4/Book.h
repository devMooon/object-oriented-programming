#ifndef _Book_h
#define _Book_h
#include <iostream>
#include <string>

using std::string;
using std::ostream;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title, int price, int pages)
		:title(title), price(price), pages(pages) {}

	string getTitle() const { return title; }

	//1)
	//Book& operator+=(const int price);
	//Book& operator-=(const int price);
	bool operator==(const int price);
	bool operator==(const string title);
	bool operator==(const Book& book);
	bool operator!() const;

	friend Book& operator+=(Book& book, const int price);
	friend Book& operator-=(Book& book, const int price);
	friend ostream& operator<<(ostream& os, const Book& book);
	friend bool operator<(const string s, const Book& book);
};
#endif // !_Book_h