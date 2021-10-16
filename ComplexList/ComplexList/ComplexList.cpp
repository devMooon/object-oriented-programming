#include "ComplexList.h"

//배열 요소 n에 복소수 설정 r = real, i = image
void ComplexList::setComplex(int i, double real, double image) {
	cl[i].SetComplex(real, image);
	validSize++;
}
void ComplexList::add(double real, double image) {
	if (validSize >= size) {
		modifySize();
	}
	setComplex(size, real, image);
}
void ComplexList::modifySize() {
	Complex* newCl = new Complex[size+1];

	for (int i = 0; i < length(); i++) {
		newCl[i] = cl[i];
	}

	delete[] cl;
	cl = newCl;
	size++;
}