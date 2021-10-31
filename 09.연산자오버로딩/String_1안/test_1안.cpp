#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main(void)
{
	const char* src = "hi";
	char* dest;

	//1-1 src가 바뀌면 dest에 영향을 미치므로 문제있음
	//dest = src;

	//1-2 대상에 문자열을 복사할 필요한 공간 확보 : (복사할 문자 개수 + 널문자)
	int size = strlen(src);
	dest = new char[size + 1];

	//문자열 복사
	strcpy(dest, src);

	std::cout << "src : " << src << std::endl;
	std::cout << "dest : " << dest << std::endl;

	return 0;
}