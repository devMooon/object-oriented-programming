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

	for (itr = v.begin(); itr != v.end(); itr++) { //itr�� ��Ҹ� ����Ű�� ������
		cout << *itr << ' ';
	}
	cout << endl;

	for (itr = v.begin(); itr != v.end(); itr++) { //itr�� ��Ҹ� ����Ű�� ������
		*itr *= 10;
		cout << *itr << ' ';
	}
	cout << endl;


	return 0;
}