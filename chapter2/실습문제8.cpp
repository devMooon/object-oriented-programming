/*#include <iostream>
#include <cstring>

int main(void)
{
	int num = 0;
	char name[100];
	char longname[100] = "";

	std::cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n>>";
	for (int i = 0; i < 5; i++) {
		std::cin.getline(name, 100, ';');
		std::cout << i + 1 << ":" << name << std::endl;
		if (num < strlen(name)) {
			num = strlen(name);
			strcpy(longname, name);
		}
	}
	std::cout << "가장 긴 이름은 " << longname << std::endl;

	return 0;
}*/