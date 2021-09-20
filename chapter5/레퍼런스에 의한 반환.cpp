//컴퓨터공학전공 20200675 문서연
#include <iostream>

char& find(char n[], int index);

int main(void)
{
	//첫번째 문자 바꾸기
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