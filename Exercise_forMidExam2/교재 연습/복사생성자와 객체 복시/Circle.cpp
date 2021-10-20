#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

Circle::Circle(const Circle& c) //복사생성자 선언
{
	this->radius = c.radius;
	cout << "복사생성자 실행 radius = " << radius << endl;
}