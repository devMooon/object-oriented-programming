#include <iostream>
#include "Person.h"
#include "AppleSeller.h"

void Person::buyApple(AppleSeller& seller, int paidMoney)
{
	int* nums = seller.sellApple(paidMoney);
	setAppleNum(getAppleNum() + nums[0]);
	setCash(getCash() - paidMoney + nums[1]);

	delete[] nums;
}
void Person::show()
{
	std::cout << "* 사람 객체 -----------" << std::endl;
	std::cout << "사과 개수 : " << getAppleNum() << std::endl;
	std::cout << "가지고 있는 현금 : " << getCash() << std::endl;
}