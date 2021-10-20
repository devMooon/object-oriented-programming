#include "Book.h"

int main(void)
{
	Book cpp("명품C++", 1000);
	Book java(cpp); //복사생성자 호출
	java.set("명품 자바", 12000);
	cpp.show();
	java.show();
	return 0;
}