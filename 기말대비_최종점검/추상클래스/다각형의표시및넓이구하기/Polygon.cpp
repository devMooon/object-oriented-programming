#define _CRT_SECURE_NO_WARNINGS
#include "Polygon.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;

Polygon::Polygon(double width, double height, const char* type)
	:width(width), height(height)
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

void Polygon::showInfo()
{
	cout << type << "[" << width << "/" << height << "]" << endl;
}