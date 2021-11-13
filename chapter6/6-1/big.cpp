#include <iostream>

using std::cout;
using std::endl;

int big(int n1, int n2)
{
	if (n1 >= n2) return n1;
	else return n2;
}
int big(int list[], int size)
{
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (list[max] < list[i]) max = i;
	}
	return list[max];
}
int main(void)
{
	int a = 10;
	int b = 20;
	int list[] = { 1, 2, 3, 4, 5 };
	int size = 5;

	cout << big(a, b) << endl;
	cout << big(list, size) << endl;

	return 0;
}