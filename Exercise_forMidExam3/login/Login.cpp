#include "Login.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Login::Login():chance(3)
{
	cout << "비밀번호 설정 >> ";
	cin >> passwd;
}
void Login::start() const
{
	char answer[10];

	while(true) {
		cout << "프로그램을 종료하려면 비밀번호를 입력하세요." << endl;
		cin >> answer;

		if (strcmp(passwd, answer) == 0) {
			cout << "프로그램을 종료합니다." << endl;
			return;
		}
		else cout << "암호가 틀렸습니다." << endl;
	}
}