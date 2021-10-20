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
		cout << a << "과 " << b << "는 값이 같습니다." << endl;
	}
	else {
		cout << a << "과 " << b << "중 더 큰 값은 " << big << "입니다."<<endl;
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