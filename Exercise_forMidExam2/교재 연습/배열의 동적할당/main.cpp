#include <iostream>
#include "Number.h"

using std::cout;
using std::endl;

int main(void)
{
	Number num(5);

	for (int i = 0; i <= 100; i++) {
		num.setNum(i, i);
	}
	num.show();
	cout<<"�հ� " << num.sum() << endl;

	return 0;
}