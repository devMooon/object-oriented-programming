#include <iostream>
#include "String.h"

using std::cout;
using std::endl;

int main(void)
{
	//1�ܰ�
	String s1;
	String s2("hello");

	//2�ܰ�
	cout << "s1: " << s1 << endl;
	cout << "s1's len: " << s1.length() << endl;

	cout << "s2: " << s2 << endl;
	cout << "s2's len: " << s2.length() << endl;

	//3�ܰ�
	s1 = s2;
	cout << "s1: " << s1 << endl;

	//4�ܰ�
	String s3 = s2;
	cout << "s3: " << s3 << endl;

	//5�ܰ�
	String s4 = s1 + s2;
	cout << "s4: " << s4 << endl;

	//6�ܰ�
	String s5("apple"); 
	cout << "s5: " << s5 << endl;

	if (s1 == s2) cout << "s1�� s2�� �����ϴ�." << endl;
	else cout << "s1�� s2�� �ٸ��ϴ�." << endl;

	if (s1 == s5) cout << "s1�� s5�� �����ϴ�." << endl;
	else cout << "s1�� s5�� �ٸ��ϴ�." << endl;

	if (s1 < s5) cout << "s5�� ������ �� �ڿ� �ִ� ���Դϴ�." << endl;
	else cout << "s1�� ������ �� �ڿ� �ִ� ���Դϴ�." << endl;

	//7�ܰ�
	cout << s4[1] << endl;
	s4[0] = 'H';
	cout << "s4: " << s4 << endl;

	return 0;
}