#ifndef _APPLESERLLER_H
#define _APPLESERLLER_H

class AppleSeller {
	const static int APPLE = 1000;
	int appleNum;
	int income = 0;

public:
	AppleSeller(int appleNum = 20) { this->appleNum = appleNum; };

	int* sellApple(int paidMoney);
	int* calculationAppleNum(int paidMoney);

	void setAppleNum(int num) { appleNum = num; };
	int getAppleNum() { return appleNum; };
	void setIncome(int money) { income = money; };
	int getIncome() { return income; };

	void show();
};
#endif //_APPLESERLLER_H