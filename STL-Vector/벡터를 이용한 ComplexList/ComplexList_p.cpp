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
	if (n >= length()) throw "오류! 유효한 인덱스의 범위를 벗어난 접근입니다.";
	return *v[n];
}
Complex* ComplexList_p::pGet(int n) {
	if (n >= length()) throw "오류! 유효한 인덱스의 범위를 벗어난 접근입니다.";
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
	cout << endl << "리스트의 값을 출력합니다." << endl;

	vector<Complex*>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		(*it)->ShowComplex();
	}
};