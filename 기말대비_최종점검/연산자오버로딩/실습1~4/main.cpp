#include "Book.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main(void)
{
	Book a("û��", 20000, 300);
	string b;

	cout << "å �̸��� �Է��ϼ��� >>";
	getline(cin, b);
	if (b < a) cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���!" << endl;

	return 0;
}