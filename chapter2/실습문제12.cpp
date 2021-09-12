#include <iostream>
int sum(int a, int b);

int main(void)
{
	int n = 0;

	std::cout << "끝 수를 입력하세요>>";
	std::cin >> n;
	
	std::cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다.";

	return 0;
}

int sum(int a, int b) {
	int k, sum = 0;
	for (k = a; k <= b; k++) {
		sum += k;
	}
	return sum;
}