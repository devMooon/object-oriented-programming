#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int length(int n);
int length(const char* str);

int main(void)
{
	cout << length(1234) << endl;
	cout << length("hi") << endl;

	return 0;
}

int length(int n)
{
	int count = 0;
	while (n > 0) {
		n /= 10;
		count++;
	}
	return count;
}
int length(const char* str)
{
	return strlen(str);
}