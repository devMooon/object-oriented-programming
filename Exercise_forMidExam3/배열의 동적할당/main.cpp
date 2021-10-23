#include "Complex.h"

Complex* CreateList(int n);
void ShowList(Complex* pList, int n);

int main(void)
{
	Complex* pList = CreateList(10);
	ShowList(pList, 10);
	return 0;

	Complex* pL[10];
	for (int i = 0; i < 10; i++) {
		pL[i] = new Complex();
	}
}
Complex* CreateList(int n)
{
	Complex* pList = new Complex[n];
	for (int i = 0; i < n; i++) {
		pList[i].setComplex(i, i * 2);
	}
	return pList;
}
void ShowList(Complex* pList, int n)
{
	for (int i = 0; i < n; i++) {
		pList[i].showComplex();
	}
}