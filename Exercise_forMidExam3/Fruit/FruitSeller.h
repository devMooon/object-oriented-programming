#ifndef _FruitSeller_h
#define _FruitSeller_h

class FruitSeller {
	int numOfApple;
	int money;
public:
	static const int APPLE_UNITCOST = 1000;

public:
	FruitSeller(int numOfApple = 5, int money = 0) :numOfApple(numOfApple), money(money) {}
	int saleApple(int m);
	void showResult() const;

	int getNumOfApple() const { return numOfApple; };
	int getMoney() const { return money; };
	void setNumOfApple(int numOfApple) { this->numOfApple = numOfApple; };
	void setMoney(int money) { this->money = money; };
};
#endif // !_FruitSeller_h
