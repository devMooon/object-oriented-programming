#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Circle* c = new Circle[10];
	cout << "�� ��ü �� : " << Circle::getCircleNum() << endl;

	delete[] c;
	cout << "�� ��ü �� : " << Circle::getCircleNum() << endl;
	
	cout << "c2 ����.." << endl; Circle c2(5);
	cout << "�� ��ü �� : " << Circle::getCircleNum() << endl;
	cout << "c3 ����.." << endl; Circle c3(7);
	cout << "�� ��ü �� : " << Circle::getCircleNum() << endl;

	return 0;
}