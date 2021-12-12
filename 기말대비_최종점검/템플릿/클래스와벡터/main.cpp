#include "Circle.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	//°´Ã¼
	/*vector<Circle> v;
	vector<Circle>::iterator itr;

	for (int i = 0; i < 5; i++) {
		v.push_back(Circle(i * 10));
	}
	for (itr = v.begin(); itr != v.end(); itr++) {
		cout << *itr << ' ';
	} cout << endl;*/
	

	//Æ÷ÀÎÅÍ
	vector<Circle*> v;
	vector<Circle*>::iterator itr;
	
	for (int i = 0; i < 5; i++) {
		v.push_back(new Circle(i * 10));
	}
	for (itr = v.begin(); itr != v.end(); itr++) {
		Circle* c = *itr;
		cout << *c << ' ';
	} cout << endl;
	for (itr = v.begin(); itr != v.end(); itr++) {
		Circle* c = *itr;
		if (*c == 30) itr = v.erase(itr);
	}
	for (itr = v.begin(); itr != v.end(); itr++) {
		Circle* c = *itr;
		cout << *c << ' ';
	} cout << endl;

	return 0;
}