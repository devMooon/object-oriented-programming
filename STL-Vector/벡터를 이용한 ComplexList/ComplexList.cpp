#include "ComplexList.h"
#include "Complex.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cerr;
using std::endl;

Complex& ComplexList::Get(int n) {
	if (n >= length()) throw "����! ��ȿ�� �ε����� ������ ��� �����Դϴ�.";
	return v[n];
};
Complex* ComplexList::pGet(int n) {
	if (n >= length()) throw "����! ��ȿ�� �ε����� ������ ��� �����Դϴ�.";
	return &v[n];
};
void ComplexList::add(double real, double image) {
	Complex c(real, image);
	if(c.isVaild())	v.push_back(c);
};
int ComplexList::length() const {
	return v.size(); 
};
void ComplexList::print() {
	cout << endl << "����Ʈ�� ���� ����մϴ�." << endl;

	vector<Complex>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		it->ShowComplex();
	}
};