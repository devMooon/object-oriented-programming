#include <iostream>
#include "Sample.h"

using std::cout;
using std::cin;
using std::endl;

void Sample::read() //동적할당 받은 정수 배열 p에서 사용자로부터 정수를 입력받음
{
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() //정수 배열을 화면에 출력
{
	for (int i = 0; i < size; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
int Sample::big() //정수 배열에서 가장 큰 수 리턴
{
	int big;
	big = p[0];
	for (int i = 1; i < size; i++) {
		if(big < p[i]) big = p[i];
	}
	return big;
}
Sample::~Sample() //소멸자
{
	cout << "객체 소멸 전 동적 할당 해제.." << endl;
	delete[] p;
	cout << "객체 소멸.." << endl;
}