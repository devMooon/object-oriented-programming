#include <iostream>
#include <cstring>
#include "Book.h"

using std::cout;
using std::endl;

Book::Book(const char* title, int price)
{
	strcpy(this->title, title);
	this->price = price;
}
Book::Book(const Book& book)
{
	book.title
	strcpy(this->title, book.title);
	this->price = price;
}
Book::~Book()
{

}
void Book::set(char* title, int price)
{

}