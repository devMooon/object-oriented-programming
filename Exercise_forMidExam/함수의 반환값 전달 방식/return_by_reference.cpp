#include <iostream>

int& return_by_reference(int n1, int n2, int& sum)
{
	sum = n1 + n2;
	return sum;
}
int main(void)
{
	int a = 5;
	int b = 3;
	int sum;
	int& sumR = return_by_reference(a, b, sum);

	std::cout << a << "+" << b << "=" << sumR;

	return 0;
}