#include "ArrayUtility.h"
#include <iostream>

using std::cout;
using std::endl;

void ArrayUtility::intToDouble(int intArray[], double doubleArray[], int size)
{
	for (int i = 0; i < size; i++) {
		doubleArray[i] = (double)intArray[i];
	}
}
void ArrayUtility::doubleToInt(double doubleArray[], int intArray[], int size)
{
	for (int i = 0; i < size; i++) {
		intArray[i] = (int)doubleArray[i];
	}
}
void ArrayUtility::show(int Array[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;
}
void ArrayUtility::show(double Array[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << Array[i] << " ";
	}
	cout << endl;
}