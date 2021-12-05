#include <iostream>
#include "String.h"

using std::cout;
using std::endl;

int main(void)
{
	String s1("Hello");
	String s2(s1);
	String s3;
	s3 = s2;
	String s4 = s3;
	String s5 = s1 + s2;

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	if (s1 == s5)
		cout << "두 문자열은 같습니다." << endl;
	else
		cout << "두 문자열은 다릅니다." << endl;

	if (s1 == "Hello")
		cout << "두 문자열은 같습니다." << endl;
	else
		cout << "두 문자열은 다릅니다." << endl;

	cout << s4[1] << endl;
	s4[0] = 'i';
	cout << s4 << endl;

	return 0;
}