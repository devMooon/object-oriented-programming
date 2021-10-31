#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main(void)
{
	const char* src = "hi";

	string dest1(src);
	string dest2 = src;

	cout << "dest1: " << dest1 << endl;
	cout << "dest2: " << dest2 << endl;
}