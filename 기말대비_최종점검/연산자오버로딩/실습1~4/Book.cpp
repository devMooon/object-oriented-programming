#include "Book.h"
#include <iostream>
#include <string>

using std::string;
using std::ostream;

//1)
/*Book& Book::operator+=(const int price)
{
	this->price += price;

	return *this;
}
Book& Book::operator-=(const int price)
{
	this->price -= price;

	return *this;
}*/
bool Book::operator==(const int price)
{
	return this->price == price;
}
bool Book::operator==(const string title)
{
	return this->title == title;
}
bool Book::operator==(const Book& book)
{
	return this->title == book.title && this->price == book.price && this->pages == book.pages;
}
bool Book::operator!() const
{
	return this->price == 0;
}


Book& operator+=(Book& book, const int price)
{
	book.price += price;

	return book;
}
Book& operator-=(Book& book, const int price)
{
	book.price -= price;

	return book;
}
ostream& operator<<(ostream& os, const Book& book)
{
	return os << book.title << " " << book.price << "원 " << book.pages << " 페이지";
}
bool operator<(const string s, const Book& book)
{
	return s < book.title;
}
