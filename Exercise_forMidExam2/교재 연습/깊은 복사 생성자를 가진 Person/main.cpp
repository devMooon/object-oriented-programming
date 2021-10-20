#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
	Person father(1, "Kitea");
	Person dougter(father);

	cout << "dougter 객체 생성 직후 -----" << endl;

	father.show();
	dougter.show();

	dougter.changeName("Grace");

	cout << "dougter 이름을 Grace로 변경한 후 -----" << endl;

	father.show();
	dougter.show();
	return 0;
}