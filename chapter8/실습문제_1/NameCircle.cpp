#define _CRT_SECURE_NO_WARNINGS
#include "NameCircle.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

NameCircle::NameCircle(int radius, const char* name) : Circle(radius)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
NameCircle::~NameCircle()
{
	if(name == NULL)delete[] name;
}
void NameCircle::setName(const char* name)
{
	if (this->name != NULL) delete[] this->name;

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
void NameCircle::show()
{
	cout << "반지름이 " << this->getRadius() << "인 " << name << endl;
}
char* NameCircle::big(NameCircle circles[], int size)
{
	int max = 0;
	for (int i = 1; i < size; i++) {
		if (circles[max].getArea() < circles[i].getArea()) max = i;
	}
	return circles[max].name;
}