#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(void)
{
	string name;
	string lastName = "";
	vector<string> v;
	vector<string>::iterator itr;

	for (int i = 0; i < 5; i++) {
		cout << "�̸�? >> ";
		getline(cin, name);
		v.push_back(name);
		if (lastName < name) lastName = name;
	}

	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << ' ';
	} cout << endl;
	cout << "���� �� ���� �ڿ� ������ �̸��� " << lastName << "�Դϴ�." << endl;

	return 0;
}