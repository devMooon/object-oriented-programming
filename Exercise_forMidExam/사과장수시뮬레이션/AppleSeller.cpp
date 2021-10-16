#include "AppleSeller.h"
#include "Person.h"
#include <iostream>

int* AppleSeller::sellApple(int paidMoney)
{
	int* nums = calculationAppleNum(paidMoney);

	setAppleNum(getAppleNum() - nums[0]);
	setIncome(getIncome() + paidMoney - nums[1]);

	return nums;
}
int* AppleSeller::calculationAppleNum(int paidMoney)
{
	int* nums = new int[2];
	nums[0] = paidMoney/ this->APPLE; //사과 개수
	nums[1] = paidMoney % this->APPLE; //거스름 돈

	return nums;
}
void AppleSeller::show()
{
	std::cout << "* 사과장수 객체 -----------" << std::endl;
	std::cout << "남은 사과 개수 : " << getAppleNum() << std::endl;
	std::cout << "오늘의 소득 : " << getIncome() << std::endl;
}