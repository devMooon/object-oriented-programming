#include <iostream>
#include <cstdlib>
#include <cstring>

int exchange_add(int& a, int& b);
int* select_sort(int* numbers, int size);
void print(int* p, int n);
char& print_string(char* n, int s, int r);

int main(void)
{
	int a = 10;
	int b = 20;
	int sum = 0;
	int numbers[] = { 2, 5, 8, 1, 0, 3, 4, 9, 6, 7 };
	int size = 10;
	int* p;
	char name[] = "������";
	int repeat = 10;

	//return by value
	//���� �����ϰ�, �� ���� ���� ���� ��ȯ
	std::cout << "1. return by value" << std::endl;
	std::cout << "���� ��..." << std::endl;
	std::cout << "a: " << a << ", b: " << b << ", sum = " << sum << std::endl;
	sum = exchange_add(a, b);
	std::cout << "���� ��..." << std::endl;
	std::cout << "a: " << a << ", b: " << b << ", sum = " << sum << std::endl;


	std::cout << std::endl;


	//return by address (�����Ҵ�� �ּ�)
	//���ĵ� �迭�� ��ȯ
	std::cout << "2. return by address" << std::endl;
	p = select_sort(numbers, size);
	std::cout << "���� �迭..." << std::endl;
	print(numbers, size);
	std::cout << "���ĵ� �迭..." << std::endl;
	print(p, size);

	
	std::cout << std::endl;


	//return by reference (�Ű������� �״�� ��ȯ)
	std::cout << "3. return by reference" << std::endl;
	std::cout << name << ". " << repeat << "�� ��� ����..." << std::endl;
	std::cout << print_string(name, size, repeat) << '. ' << repeat << "�� ��� ��..." << std::endl;

	return 0;
}
int exchange_add(int& a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	return a + b;
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
}
char& print_string(char* n, int s, int r)
{
	for (int i = 0; i < r; i++) {
		std::cout << i+1 << ": ";
		for (int k = 0; k < strlen(n); k++) {
			std::cout << n[k];
		}
		std::cout << std::endl;
	}
	return *n;
}