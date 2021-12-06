#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> v;

	for (int i = 0; i < 10; i++) {
		v.push_back((i + 1) * 10);
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	for (int i = 0; i < v.size(); i++)
		v[i] = i * 2;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;
	
	return 0;
}