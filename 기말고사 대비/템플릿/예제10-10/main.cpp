#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	vector<string> v;
	vector<string>::iterator it;
	string name;
	string lastName = "";

	cout << "�̸��� 5�� �Է��϶�" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		v.push_back(name);
		
		if (lastName < name) lastName = name;
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << lastName << endl;

	return 0;
}