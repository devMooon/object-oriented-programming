#include <iostream>

using std::cout;
using std::endl;

int sum(int n)
{
	int sum = 0;

	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}
int sum(int n, int m)
{
	int sum = 0;

	for (int i = n; i <= m; i++) {
		sum += i;
	}
	return sum;
}
int main(void)
{
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}