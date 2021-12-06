#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

int main(void)
{
	Rectangle r1(4, 4);
	Rectangle r2(2, 4);
	Rectangle r3 = r1;

	cout << "r1: " << r1 << endl;
	cout << "r2: " << r2 << endl;
	cout << "r3: " << r3 << endl;

	if (r1 == r2)	cout << "r1과 r2는 같습니다." << endl;
	else			cout << "r1과 r2는 다릅니다." << endl;

	if (r1 == r3)	cout << "r1과 r3는 같습니다." << endl;
	else			cout << "r1과 r3는 다릅니다." << endl;

	return 0;
}