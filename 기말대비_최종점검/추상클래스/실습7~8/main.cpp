#include "Oval.h"
#include "Rect.h"
#include "Triangular.h"
#include "Shape.h"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	/*Shape* shape[3];
	shape[0] = new Oval("��붱", 10, 20); 
	shape[1] = new Rect("����", 30, 40);
	shape[2] = new Triangular("�佺Ʈ", 30, 40);

	for (int i = 0; i < 3; i++) {
		cout << shape[i]->getNAme() << "�� ���̴� " << shape[i]->getArea() << endl;
	}*/




	vector<Shape*> v;
	vector<Shape*>::iterator itr;

	v.push_back(new Oval("��붱", 10, 20));
	v.push_back(new Rect("����", 30, 40));
	v.push_back(new Triangular("�佺Ʈ", 30, 40));

	for (itr = v.begin(); itr != v.end(); itr++) {
		Shape* s = *itr;
		cout << s->getNAme() << "�� ���̴� " << s->getArea() << endl;
	}



	return 0;
}