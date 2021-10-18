#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Circle* c = new Circle[10];
	cout << "盔 按眉 荐 : " << Circle::getCircleNum() << endl;

	delete[] c;
	cout << "盔 按眉 荐 : " << Circle::getCircleNum() << endl;
	
	cout << "c2 积己.." << endl; Circle c2(5);
	cout << "盔 按眉 荐 : " << Circle::getCircleNum() << endl;
	cout << "c3 积己.." << endl; Circle c3(7);
	cout << "盔 按眉 荐 : " << Circle::getCircleNum() << endl;

	return 0;
}