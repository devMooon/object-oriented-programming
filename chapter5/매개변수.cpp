#include <iostream>
void swap(int a, int b);
void swap1(int* a, int* b);
void swap2(int& a, int& b);

int main(void)
{
	int a, b;
	a = 10;
	b = 20;
	std::cout << "a : " << a << ", b : " << b << std::endl << std::endl;

	//���� ���� ȣ��
	swap(a, b);
	std::cout << "���� ���� ȣ��� a, b ���� ������ ����" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	//�ּҿ� ���� ȣ��
	swap1(&a, &b);
	std::cout << "�ּҰ��� ���� ȣ��� a, b ���� ����" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;
	//���۷����� ���� ȣ��
	//������ �ϳ� ����� ������, �޸𸮰� �Ҵ�Ǵ� ���� �ƴ�
	swap2(a, b);
	std::cout << "���۷����� ���� ȣ��� a, b ���� ����" << std::endl;
	std::cout << "a : " << a << ", b : " << b << std::endl;

	return 0;
}
void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
void swap1(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void swap2(int& a, int& b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}