#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main(void)
{
	const char* src = "hi";
	char* dest;

	//1-1 src�� �ٲ�� dest�� ������ ��ġ�Ƿ� ��������
	//dest = src;

	//1-2 ��� ���ڿ��� ������ �ʿ��� ���� Ȯ�� : (������ ���� ���� + �ι���)
	int size = strlen(src);
	dest = new char[size + 1];

	//���ڿ� ����
	strcpy(dest, src);

	std::cout << "src : " << src << std::endl;
	std::cout << "dest : " << dest << std::endl;

	return 0;
}