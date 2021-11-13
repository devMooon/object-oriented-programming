#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Book::Book(const char* title, int price, int pages)
{
	this->price = price;
	this->pages = pages;
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
}
Book::Book(const Book& book)
{
	price = book.price;
	pages = book.pages;
	title = new char[strlen(book.title) + 1];
	strcpy(title, book.title);
}
Book::~Book()
{
	if (title == NULL) delete[] title;
}
void Book::show() const
{
	cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}
char* Book::getTitle() const
{
	return title;
}
Book Book::operator+=(const int price)
{
	this->price += price;

	return *this;
}
Book Book::operator-=(const int price)
{
	this->price -= price;

	return *this;
}
bool Book::operator==(const int price) const
{
	if (this->price == price) return true;
	else return false;
}
bool Book::operator==(const char* title) const
{
	if (strcmp(this->title, title)==0) return true;
	else return false;
}
bool Book::operator==(const Book& book) const
{
	if ((price == book.price)&&(strcmp(title, book.title)==0)&&(pages == book.pages)) return true;
	else return false;
}
Book& Book::operator=(const Book& book)
{
	price = book.price;
	pages = book.pages;
	if (!title) delete[] title;
	title = new char[strlen(book.title) + 1];
	strcpy(title, book.title);

	return *this;
}
ostream& operator<<(ostream& os, const Book& book)
{
	os << book.title << ' ' << book.price << "원 " << book.pages << " 페이지" << endl;
	return os;
}