#include <iostream>
int sum(int a, int b);

int main(void)
{
	int n = 0;

	std::cout << "�� ���� �Է��ϼ���>>";
	std::cin >> n;
	
	std::cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�.";

	return 0;
}

int sum(int a, int b) {
	int k, sum = 0;
	for (k = a; k <= b; k++) {
		sum += k;
	}
	return sum;
}