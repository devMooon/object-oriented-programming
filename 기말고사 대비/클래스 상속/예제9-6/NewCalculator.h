#ifndef _NewCalculator_h
#define _NewCalculator_h
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class NewCalculator
{
	void input() {
		cout << "정수 2개를 입력하세요. >> ";
		cin >> a >> b;
	}
private:
	int a, b;
	virtual int calc(int a, int b) = 0;
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};

#endif // !_NewCalculator_h