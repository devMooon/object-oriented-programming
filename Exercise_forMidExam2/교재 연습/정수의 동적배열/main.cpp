#include <iostream>

using namespace std;

int main(void)
{
	int* numbers = new int[5];
	int num;

	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> num;
		numbers[i] = num;
	}

	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += numbers[i];
	}
	cout << "평균 " << (sum / (double)5);
	return 0;
}