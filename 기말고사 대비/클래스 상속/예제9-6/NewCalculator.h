#ifndef _NewCalculator_h
#define _NewCalculator_h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class NewCalculator
{
	void input() {
		cout << "���� 2���� �Է��ϼ���. >> ";
		cin >> a >> b;
	}
private:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "���� ���� " << calc(a, b) << endl;
	}
};

#endif // !_NewCalculator_h