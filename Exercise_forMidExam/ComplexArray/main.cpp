#include "Complex.h"
#include <iostream>

using std::cout;

void ShowComplexArray(Complex* array, int size);

int main(void)
{
	Complex cList[] = {
		Complex(2, 4),
		Complex(4, 8),
		Complex(8, 16),
		Complex(16, 32)
	};

	const int NLIST = sizeof cList / sizeof cList[0];

	ShowComplexArray(cList, NLIST);

	return 0;
}
void ShowComplexArray(Complex* array, int size)
{
	for (int i = 0; i < size; i++) {
		//array[i].ShowComplex();
		(array+i)->ShowComplex();

		cout << "\n";
	}
}