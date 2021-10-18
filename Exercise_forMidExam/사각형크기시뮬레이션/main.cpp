#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Rectangle r;

	r.lt.x = 5;
	r.lt.y = 9;

	r.rb.x = -2;
	r.rb.y = 4;

	cout << "³ÐÀÌ: " << r.getArea() << endl;
	cout << "µÑ·¹: " << r.getPerimeter() << endl;

	int* numbers = new int[10];
	numbers[0] = 1;
}