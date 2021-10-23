#include "ComplexList.h"
#include <iostream>

using std::cout;
using std::endl;

void create1(ComplexList cl); //복사생성자 호출 2
ComplexList create2(void); //복사생성자 호출 3

int main(void)
{
	ComplexList cl1;
	cout << "초기 ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	cl1.setComplexList(9, 2);
	cout << "9로 사이즈 변경한 ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	cl1.setComplexList(15, 3);
	cout << "15로 사이즈 변경한 ComplexList" << endl;
	cl1.showComplexList();

	cout << endl;

	ComplexList cl2(cl1); //복사생성자 호출 1
	cl2.setComplexList(4, 50);
	cout << "복사생성자로 cl2 객체 생성 후 cl2만 사이즈와 요소 값 변경" << endl;
	cout << "cl1..." << endl;
	cl1.showComplexList();
	cout << "cl2..." << endl;
	cl2.showComplexList();

	create1(cl2); //복사생성자 호출 2
	cl2.showComplexList();

	ComplexList cl3 = create2(); //복사생성자 호출 3
	cl3.showComplexList();
	return 0;
}
void create1(ComplexList cl) //복사생성자 호출 2
{
	cout << "복사된 객체.." << endl;
	cl.setComplexList(20, 4);
	cl.showComplexList();
}
ComplexList create2(void) //복사생성자 호출 3
{
	ComplexList cl(5);
	cout << "새로 생성된 객체.." << endl;
	cl.setComplexList(5, 5);
	cl.showComplexList();

	return cl;
}