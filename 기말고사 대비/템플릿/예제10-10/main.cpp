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

	cout << "이름을 5개 입력하라" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, name);
		v.push_back(name);
		
		if (lastName < name) lastName = name;
	}
	cout << "사전에서 가장 뒤에 나오는 이름은 " << lastName << endl;

	return 0;
}