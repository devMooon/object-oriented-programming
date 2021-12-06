#include <iostream>
#include "String.h"

using std::cout;
using std::endl;

int main(void)
{
	//1단계
	String s1;
	String s2("hello");

	//2단계
	cout << "s1: " << s1 << endl;
	cout << "s1's len: " << s1.length() << endl;

	cout << "s2: " << s2 << endl;
	cout << "s2's len: " << s2.length() << endl;

	//3단계
	s1 = s2;
	cout << "s1: " << s1 << endl;

	//4단계
	String s3 = s2;
	cout << "s3: " << s3 << endl;

	//5단계
	String s4 = s1 + s2;
	cout << "s4: " << s4 << endl;

	//6단계
	String s5("apple"); 
	cout << "s5: " << s5 << endl;

	if (s1 == s2) cout << "s1과 s2는 같습니다." << endl;
	else cout << "s1과 s2는 다릅니다." << endl;

	if (s1 == s5) cout << "s1과 s5는 같습니다." << endl;
	else cout << "s1과 s5는 다릅니다." << endl;

	if (s1 < s5) cout << "s5가 사전상 더 뒤에 있는 값입니다." << endl;
	else cout << "s1가 사전상 더 뒤에 있는 값입니다." << endl;

	//7단계
	cout << s4[1] << endl;
	s4[0] = 'H';
	cout << "s4: " << s4 << endl;

	return 0;
}