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
	nums[0] = paidMoney/ this->APPLE; //��� ����
	nums[1] = paidMoney % this->APPLE; //�Ž��� ��

	return nums;
}
void AppleSeller::show()
{
	std::cout << "* ������ ��ü -----------" << std::endl;
	std::cout << "���� ��� ���� : " << getAppleNum() << std::endl;
	std::cout << "������ �ҵ� : " << getIncome() << std::endl;
}