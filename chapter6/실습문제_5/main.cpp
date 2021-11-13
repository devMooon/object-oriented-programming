#include "ArrayUtility.h"
#include "ArrayUtility2.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int x[] = { 1, 2, 3, 4, 5 };
	double y[5];
	double z[] = { 9.9, 8.8, 7.7, 6.6, 5.5 };

	ArrayUtility::intToDouble(x, y, 5);
	ArrayUtility::show(y, 5);

	ArrayUtility::doubleToInt(z, x, 5);
	ArrayUtility::show(x, 5);

	int arr1[5], arr2[5];

	cout << "정수 5개를 입력하라. 배열 arr1에 삽입한다.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr1[i];
	}
	cout << "정수 5개를 입력하라. 배열 arr2에 삽입한다.>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr2[i];
	}

	ArrayUtility::show(arr1, 5);
	ArrayUtility::show(arr2, 5);
	int size;

	int* newArray1 = ArrayUtility2::concat(arr1, arr2, 5);
	ArrayUtility::show(newArray1, 10);

	int* newArray2 = ArrayUtility2::remove(arr1, arr2, 5, size);
	ArrayUtility::show(newArray2, size);

	delete[] newArray1;
	delete[] newArray2;
}