#include <iostream>
#include "Sample.h"

using std::cout;
using std::endl;

int main(void)
{
	Sample s(10);
	s.read(); //Ű���忡�� ���� �迭 �б�
	s.write(); //���� �迭 ���
	cout << "���� ū ���� " << s.big() << endl; //���� ū �� ���
	return 0;
}