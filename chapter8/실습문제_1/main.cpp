#include "NameCircle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	NameCircle waffle(3, "waffle");
	waffle.show();

	NameCircle pizza[5];
	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요." << endl;

	int radius;
	char name[10];
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> radius;
		cin >> name;
		pizza[i].setRadius(radius);
		pizza[i].setName(name);
	}

	cout << "가장 면적이 큰 피자는 " << NameCircle::big(pizza, 5);
	
	return 0;
}