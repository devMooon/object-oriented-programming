#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	NamedCircle waffle(3, "waffle");

	waffle.show();

	NamedCircle pizza[5];

	int max = 0;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> pizza[i];

		if (pizza[max] < pizza[i]) max = i;
	}

	cout << "가장 면적이 큰 원은 " << pizza[max] << "입니다!" << endl;


	return 0;
}