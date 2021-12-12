#ifndef _Calculator_h
#define _Calculator_h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Calculator
{
	void input() {
		cout << "���� 2���� �Է��ϼ���. >> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};
#endif // !_Calculator_h