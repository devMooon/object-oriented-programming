//��ǻ�Ͱ������� 20200675 ������
#include <iostream>

char& find(char n[], int index);

int main(void)
{
	//ù��° ���� �ٲٱ�
	std::cout << "3. return by reference" << std::endl << std::endl;

	char name[] = "Mike";
	std::cout << name << std::endl;

	find(name, 0) = 'S';

	std::cout << name << std::endl;

	return 0;
}
char& find(char n[], int index)
{
	return n[index];
}