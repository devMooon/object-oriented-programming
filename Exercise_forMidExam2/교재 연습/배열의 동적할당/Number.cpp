#include "Number.h"
#include <iostream>

using std::cout;
using std::endl;

Number::Number(int size)
{
	numbers = new int[size];
	vaildSize = 0;
	this->size = size;
}
void Number::Modify(void)
{
	int* nums = new int[size + 10];
	for (int i = 0; i < size; i++) {
		nums[i] = numbers[i];
	}
	delete[] numbers;
	numbers = nums;
	size = size + 10;
}
int Number::getNum(int index) const
{
	return numbers[index];
}
void Number::setNum(int index, int num)
{
	if (index >= size) {
		Modify();
	}
	numbers[index] = num;
	vaildSize++;
}
void Number::show(void) const
{
	cout << "배열의 요소 : ";
	for (int i = 0; i < vaildSize; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;	
}
int Number::sum(void)
{
	int sum = 0;
	for (int i = 0; i < vaildSize; i++) {
		sum += numbers[i];
	}
	return sum;
}