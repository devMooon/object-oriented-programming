#include "Power.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Power p1(1, 2);
	Power p2(3, 4);

	cout << "p1 : " << p1 << endl;
	cout << "p2 : " << p2 << endl;

	Power p3 = p1 + p2;
	cout << "p1 + p2 : " << p3 << endl;

	cout << "++p3 : " << ++p3 << endl;
	cout << "p3++ : " << p3++ << endl;
	cout << "p3 : " << p3 << endl;

}