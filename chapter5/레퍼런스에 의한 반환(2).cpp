//컴퓨터공학전공 20200675
#include <iostream>
#include <cstring>

char& print_string(char *n, int s, int r);

int main(void)
{
	char name[] = "문서연";
	int size = 10;
	int repeat = 10;

	//return by reference (매개변수를 그대로 반환)
	std::cout << "3. return by reference" << std::endl << std::endl;
	std::cout << name << ". " << repeat << "번 출력 시작..." << std::endl;
	std::cout << print_string(name, size, repeat) << ". " << repeat << "번 출력 끝..." << std::endl;

	return 0;
}
char& print_string(char *n, int s, int r)
{
	for (int i = 0; i < r; i++) {
		std::cout << i+1 << ": ";
		std::cout << n << std::endl;
	}
	return *n;
}