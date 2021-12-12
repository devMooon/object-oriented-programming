#ifndef _Calculator_h
#define _Calculator_h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Calculator
{
	void input() {
		cout << "정수 2개를 입력하세요. >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};
#endif // !_Calculator_h