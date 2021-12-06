#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	vector<int> v;
	vector<int>::iterator it;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;

	v[1] = 10;
	v[4] = 5;

	for (it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	cout << endl;

	return 0;
}