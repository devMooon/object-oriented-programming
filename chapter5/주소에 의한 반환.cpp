//��ǻ�Ͱ������� 20200675
/*#include <iostream>
#include <cstdlib>

int* select_sort(int* numbers, int size);
void print(int* p, int n);
int main(void)
{
	int numbers[] = { 2, 5, 8, 1, 0, 3, 4, 9, 6, 7 };
	int size = 10;
	int* p;

	//return by address (�����Ҵ�� �ּ�)
	//���ĵ� �迭�� ��ȯ
	std::cout << "2. return by address" << std::endl << std::endl;
	p = select_sort(numbers, size);
	std::cout << "���� �迭..." << std::endl;
	print(numbers, size);
	std::cout << "���ĵ� �迭..." << std::endl;
	print(p, size);

	return 0;
}

int* select_sort(int* n, int size)
{
	int* pi;
	int min;
	int tmp;

	pi = (int*)malloc(sizeof(int)*size);

	for (int i = 0; i < size; i++) {
		pi[i] = n[i];
	}

	for (int i = 0; i < size - 1; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (pi[min] > pi[j]) {
				min = j;
			}
		}
		tmp = pi[i];
		pi[i] = pi[min];
		pi[min] = tmp;
	}
	return pi;
}
void print(int* p, int n)
{
	for (int i = 0; i < n; i++) {
		std::cout << p[i] << ' ';
	}
	std::cout << std::endl;
}*/