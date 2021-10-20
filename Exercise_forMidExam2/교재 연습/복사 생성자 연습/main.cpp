#include <iostream>
#include "CircleList.h"

using std::cout;
using std::endl;

void create(CircleList c, int size) {
	cout << "\n동적배열 다시 만들 거야!!" << endl;
	c.setClist(size);

	cout << "c 깊복..." << endl;

	cout << "c..." << endl;
	c.show();
}
CircleList create2(void) {
	CircleList c(3);
	c.setClist();

	cout << "c 깊복..." << endl;

	cout << "c..." << endl;
	c.show();
	return c;
}

int main(void)
{
	
	CircleList cl1;
	cout << "cl1 정의" << endl;
	cl1.setClist(1);
	CircleList cl2(cl1); //깊복0
	cout << "cl2 정의" << endl;
	cl2.setClist(5);

	CircleList cl3 = cl1; //깊복1

	cout << "cl1..." << endl;
	cl1.show();
	cout << "cl2..." << endl;
	cl2.show();
	cout << "cl3..." << endl;
	cl3.show();

	create(cl1, 4);
	cout << "cl1 다시 정의 후..." << endl;

	cout << "cl1..." << endl;
	cl1.show();
	cout << "cl2..." << endl;
	cl2.show();

	CircleList cl5 = create2();
	cout << "cl5..." << endl;
	cl5.show();
	return 0;
}