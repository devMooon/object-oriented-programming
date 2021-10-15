/*#include <iostream>

int* return_by_address(int n1, int n2, int* p)
{
	*p = n1 + n2;
	return p; //반환값은 임시 저장 공간에 복사되어 전달
}
int main(void)
{
	int a = 5;
	int b = 3;
	int sum;
	int* sumP = return_by_address(a, b, &sum);

	std::cout << a << " + " << b << " = " << *sumP;
	return 0;
}*/