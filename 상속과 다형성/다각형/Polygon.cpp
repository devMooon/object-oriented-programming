#define _CRT_SECURE_NO_WARNINGS
#include "Polygon.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Polygon::Polygon():width(0), height(0)
{
	this->type = new char[1];
	strcpy(this->type, "");
}
Polygon::Polygon(double width, double height, const char* type):width(width), height(height)
{
	this->type = new char[strlen(type) + 1];
	strcpy(this->type, type);
}
Polygon::Polygon(const Polygon& polygon)
{
	this->width = polygon.width;
	this->height = polygon.height;

	this->type = new char[strlen(polygon.type) + 1];
	strcpy(this->type, polygon.type);
}
Polygon::~Polygon() 
{ 
	delete[] type; 
}

Polygon& Polygon::operator=(const Polygon& polygon)
{
	if (this->type != NULL) delete[] this->type;

	this->width = polygon.width;
	this->height = polygon.height;

	this->type = new char[strlen(polygon.type) + 1];
	strcpy(this->type, polygon.type);

	return *this;
};
ostream& operator<<(ostream& os, const Polygon& polygon)
{
	os << "type: " << polygon.type << ", \twidth: " << polygon.width << ", \theight : " << polygon.height << "\n";

	return os;
}
void Polygon::ShowInfo() const
{
	cout << "type: " << this->type << ", \twidth: " << this->width << ", \theight : " << this->height << endl;
}