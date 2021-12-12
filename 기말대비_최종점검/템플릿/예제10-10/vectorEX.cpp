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
		cout << "이름? >> ";
		getline(cin, name);
		v.push_back(name);
		if (lastName < name) lastName = name;
	}

	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << ' ';
	} cout << endl;
	cout << "사전 상 가장 뒤에 나오는 이름은 " << lastName << "입니다." << endl;

	return 0;
}