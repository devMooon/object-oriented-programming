#include <iostream>
#include <cstring>

using namespace std;

int length(int num);
int length(const char string[]);

int main(void)
{
	char string[] = "hello";
	int num = 123456;

	std::cout << string << " 의 길이 : " << length(string) << endl;
	std::cout << num << " 의 길이 : " << length(num) << endl;

	return 0;
}
int length(int num)
{
	int cnt = 0;
	while (num > 0) {
		num = num / 10;
		cnt++;
	}
	return cnt;
}
int length(const char string[])
{
	return strlen(string);
}