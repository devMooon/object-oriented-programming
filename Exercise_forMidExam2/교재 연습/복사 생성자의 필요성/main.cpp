#include "Book.h"

int main(void)
{
	Book cpp("��ǰC++", 1000);
	Book java(cpp); //��������� ȣ��
	java.set("��ǰ �ڹ�", 12000);
	cpp.show();
	java.show();
	return 0;
}