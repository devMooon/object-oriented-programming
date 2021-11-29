#include "ComplexList_p.h"
#include <iostream>
#include <vector>

using std::vector;
using std::cerr;
using std::cout;
using std::endl;

ComplexList_p::~ComplexList_p() {
	vector<Complex* >::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		delete *it;
	}
}
Complex& ComplexList_p::Get(int n)  {
	if (n >= length()) throw "����! ��ȿ�� �ε����� ������ ��� �����Դϴ�.";
	return *v[n];
}
Complex* ComplexList_p::pGet(int n) {
	if (n >= length()) throw "����! ��ȿ�� �ε����� ������ ��� �����Դϴ�.";
	return v[n];
}
void ComplexList_p::add(double real, double image) {
	Complex *c = new Complex(real, image);
	if (c->isVaild()) v.push_back(c);
}
int ComplexList_p::length() const {
	return v.size();
}
void ComplexList_p::print() {
	cout << endl << "����Ʈ�� ���� ����մϴ�." << endl;

	vector<Complex*>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		(*it)->ShowComplex();
	}
};