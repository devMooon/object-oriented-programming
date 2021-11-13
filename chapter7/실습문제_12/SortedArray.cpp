#include "SortedArray.h"
#include <iostream>

using std::cout;
using std::endl;

void SortedArray::sort()
{
	int temp;
	int min;

	for (int i = 0; i < size - 1; i++) {
		min = i;
		for (int j = 0; j < size - i; j++) {
			if (p[min] > p[j]) min = j;
		}
		temp = p[min];
		p[min] = p[i];
		p[i] = temp;
	}
}

SortedArray::SortedArray()
{
	p = NULL;
	size = 0;
}
SortedArray::SortedArray(SortedArray& src)
{
	p = new int[src.size];
	size = src.size;

	for (int i = 0; i < size; i++) {
		p[i] = src.p[i];
	}
}
SortedArray::SortedArray(int p[], int size)
{
	this->p = new int[size];
	this->size = size;

	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
}
SortedArray::~SortedArray()
{
	if(p != NULL) delete[] p;
}
SortedArray SortedArray::operator+(SortedArray& op2)
{
	int size = this->size + op2.size;
	int* arr = new int[size];

	for (int i = 0; i <this->size; i++) {
		arr[i] = this->p[i];
	}
	for (int i = 0; i < op2.size; i++) {
		arr[i + this->size] = op2.p[i];
	}

	SortedArray sa(arr, size);

	return sa;

}
SortedArray& SortedArray::operator=(const SortedArray& op2)
{
	if (this->p != NULL) delete[] this->p;
	p = new int[op2.size];
	size = op2.size;

	for (int i = 0; i < size; i++) {
		p[i] = op2.p[i];
	}

	return *this;
}
void SortedArray::show()
{
	sort();

	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}