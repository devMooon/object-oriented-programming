#include <iostream>

using std::cout;
using std::endl;

bool bigger(int a, int b, int& big)
{
	if (a == b) return true;
	else {
		if (a > b) big = a;
		else big = b;
		
		return false;
	}	
}
void print(int a, int b, int& big)
{
	if (bigger(a, b, big)) {
		cout << a << "�� " << b << "�� ���� �����ϴ�." << endl;
	}
	else {
		cout << a << "�� " << b << "�� �� ū ���� " << big << "�Դϴ�."<<endl;
	}
}
int main(void)
{
	int big;

	print(1, 1, big);
	print(2, 1, big);
	print(1, 2, big);
	
	return 0;
}