/*#include <iostream>
#include <cstring>

int main(void)
{
	int num = 0;
	char name[100];
	char longname[100] = "";

	std::cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.\n>>";
	for (int i = 0; i < 5; i++) {
		std::cin.getline(name, 100, ';');
		std::cout << i + 1 << ":" << name << std::endl;
		if (num < strlen(name)) {
			num = strlen(name);
			strcpy(longname, name);
		}
	}
	std::cout << "���� �� �̸��� " << longname << std::endl;

	return 0;
}*/