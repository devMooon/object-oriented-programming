#include <iostream>
#include "ComplexList.h"

int main(void)
{
	ComplexList cl1;
	ComplexList cl2(5);

	//�迭 ��ü �ʱ�ȭ
	for (int i = 0; i < cl1.length(); i++) {
		cl1.setComplex((i + 1), (i + 1) * 10, i);		
	}

	for (int i = 0; i < cl2.length(); i++) {
		cl2.setComplex((i + 1) * 10, (i + 1) * 10 + 5, i);
	}

	//�迭�� ��� ���
	std::cout << "cl1�� ��� �� ���...\n";
	for (int i = 0; i < cl1.length(); i++) {
		std::cout << i << "�� : ";
		cl1.getCl(i).ShowComplex();
	}
	std::cout << std::endl;

	std::cout << "cl2�� ��� �� ���...\n";
	for (int i = 0; i < cl2.length(); i++) {
		std::cout << i << "�� : ";
		cl2.getCl(i).ShowComplex();
	}

	std::cout << "\ncl1" <<cl1.length() + 1<< "�� ��� 2�� �߰�...\n\n";
	cl1.add(2, 3);
	cl1.add(4, 5);

	cl2.add(2, 3);
	cl2.add(4, 5);

	//�迭�� ��� ���
	std::cout << "cl1�� ��� �� ���...\n";
	for (int i = 0; i < cl1.length(); i++) {
		std::cout << i << "�� : ";
		cl1.getCl(i).ShowComplex();
	}
	std::cout << std::endl;

	std::cout << "cl2�� ��� �� ���...\n";
	for (int i = 0; i < cl2.length(); i++) {
		std::cout << i << "�� : ";
		cl2.getCl(i).ShowComplex();
	}

}