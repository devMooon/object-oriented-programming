//��ǻ�Ͱ������� 20200675
#include <iostream>
#include <cstring>

char& print_string(char *n, int s, int r);

int main(void)
{
	char name[] = "������";
	int size = 10;
	int repeat = 10;

	//return by reference (�Ű������� �״�� ��ȯ)
	std::cout << "3. return by reference" << std::endl << std::endl;
	std::cout << name << ". " << repeat << "�� ��� ����..." << std::endl;
	std::cout << print_string(name, size, repeat) << ". " << repeat << "�� ��� ��..." << std::endl;

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