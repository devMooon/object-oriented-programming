// C - 스트링을 이용하여 암호가 입력되면 프로그램을 종료하는 예

/*#include <iostream>
#include <cstring>

int main(void)
{
	char passwd[] = "C++";
	char answer[10];

	while (true) {
		std::cout << "암호? : ";
		std::cin >> answer;
		if (strcmp(passwd, answer) == 0) {
			std::cout << "정답!!\n";
			break;
		}
		else {
			std::cout << "틀렸습니다..\n";
		}
	}
	return 0;
}*/