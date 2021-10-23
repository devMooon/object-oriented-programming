#include <iostream>

using namespace std;

int sums(int numbers[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}
	return sum;
}
void sets(int numbers[], int size)
{
	int num;
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> num;
		numbers[i] = num;
	}

}
int main(void)
{
	int* numbers = new int[5];
	int size = 5;

	sets(numbers, size);
	int sum = sums(numbers, size);
	cout << "평균 " << (sum / (double)5);
	return 0;
}
