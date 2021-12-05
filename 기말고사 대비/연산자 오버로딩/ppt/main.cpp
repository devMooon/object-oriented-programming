
#include <iostream>
#include "ComplexList.h"
#include "Complex.h"

using std::cout;
using std::endl;

int main(void)
{
	ComplexList cl(5);

	cl.add(Complex(1, 2));
	cl.add(Complex(2, 2));
	cl.add(Complex(3, 2));
	cl.add(Complex(4, 2));
	cl.add(Complex(5, 2));
	cl.add(Complex(6, 2));
	cl.add(Complex(7, 2));

	cl.show();
	
	Complex c1 = cl[0] + cl[1];
	cout << "cl[0] + cl[1]: ";
	c1.showInfo();

	Complex c2 = cl[0] - cl[1];
	cout << "cl[0] - cl[1]: ";
	c2.showInfo();

	Complex c3 = cl[0];
	cout << "cl[0]: ";
	c3.showInfo();

	ComplexList cl2 = cl;
	cout << "ComplexList cl2: " << endl;
	cl2.show();

	if (c3 == cl[0]) cout << "두 값이 같습니다!" << endl;
	else cout << "두 값이 다릅니다!" << endl;

	if (c2 < c3) cout << "c3이 더 큽니다." << endl;
	else cout << "c2이 더 큽니다." << endl;

	if (c2 <= c3) cout << "c3이 같거나 더 큽니다." << endl;
	else cout << "c2이 같거나 더 큽니다." << endl;

	if (cl == cl2) cout << "cl과 cl2는 같습니다." << endl;
	else cout << "cl과 cl2는 다릅니다." << endl;

	Complex c4 = -cl2[1];
	cout << "c4: ";
	c4.showInfo();

	Complex c5 = c4++;
	cout << "c5: ";
	c5.showInfo();
	cout << "c4: ";
	c4.showInfo();

	++c4;
	cout << "c4: ";
	c4.showInfo();

	cout << "4 + c4: ";
	(4 + c4).showInfo();

	cout << "c4: " << c4 << endl;

	Complex c6 = cl[1] + cl2[1];
	cout << "cl[1] + cl2[1] == c6: " << c6 << endl;
	cout << "cl[5]: " << cl[5] << endl;
	cout << "cl[6]: " << cl[6] << endl;
	cout << "cl[7]: " << cl[7] << endl;
	return 0;
}