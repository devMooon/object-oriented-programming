#include <iostream>
#include "Sample.h"

using std::cout;
using std::endl;

int main(void)
{
	Sample s(10);
	s.read(); //키보드에서 정수 배열 읽기
	s.write(); //정수 배열 출력
	cout << "가장 큰 수는 " << s.big() << endl; //가장 큰 수 출력
	return 0;
}