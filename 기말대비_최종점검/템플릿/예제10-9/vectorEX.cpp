#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> v;
	vector<int>::iterator itr;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for (itr = v.begin(); itr != v.end(); itr++) { //itr은 요소를 가리키는 포인터
		cout << *itr << ' ';
	}
	cout << endl;

	for (itr = v.begin(); itr != v.end(); itr++) { //itr은 요소를 가리키는 포인터
		*itr *= 10;
		cout << *itr << ' ';
	}
	cout << endl;


	return 0;
}