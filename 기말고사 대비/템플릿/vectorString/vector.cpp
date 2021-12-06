#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::getline;

int main(void)
{
	vector<string> v;

	cout << "이름을 다섯개 입력해라." << endl;
	string name;
	for (int i = 0; i < 5; i++) {

		cout << i + 1 << " >> ";
		getline(cin, name);
		v.push_back(name);
	}

	name = v[0];

	vector<string>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		if (name < *it) name = *it;

	cout << "사전상 가장 뒤에 나오는 이름은 '" << name << "' 입니다." << endl;

	return 0;
}