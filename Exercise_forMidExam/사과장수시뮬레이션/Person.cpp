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
	std::cout << "* ��� ��ü -----------" << std::endl;
	std::cout << "��� ���� : " << getAppleNum() << std::endl;
	std::cout << "������ �ִ� ���� : " << getCash() << std::endl;
}