#include "Login.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Login::Login():chance(3)
{
	cout << "��й�ȣ ���� >> ";
	cin >> passwd;
}
void Login::start() const
{
	char answer[10];

	while(true) {
		cout << "���α׷��� �����Ϸ��� ��й�ȣ�� �Է��ϼ���." << endl;
		cin >> answer;

		if (strcmp(passwd, answer) == 0) {
			cout << "���α׷��� �����մϴ�." << endl;
			return;
		}
		else cout << "��ȣ�� Ʋ�Ƚ��ϴ�." << endl;
	}
}