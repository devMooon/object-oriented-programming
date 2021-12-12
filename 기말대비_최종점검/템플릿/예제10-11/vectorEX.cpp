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
	vector<string> v;
	vector<string>::iterator itr;

	for (int i = 0; i < 3; i++) {
		cout << "이름? >> ";
		getline(cin, name);
		v.push_back(name);
	}
	cout << "삭제 후" << endl;
	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << ' ';
	} cout << endl;
	for (itr = v.begin(); itr != v.end(); itr++) {
		if (*itr == "문서연") itr = v.erase(itr);
	}
	cout << "삭제 전" << endl;
	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << ' ';
	} cout << endl;

	return 0;
}
