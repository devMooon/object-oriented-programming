//iterator�� �̿��� ��� ���ҵ鿡 2 ���ϱ�
#include <iostream>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;
using std::sort;

int main(void)
{
	vector<Shape*> v;
	vector<Shape*>::iterator it;

	v.push_back(new Rectangle("Rectangle", 10, 10));
	v.push_back(new Rectangle("Rectangle", 20, 10));
	v.push_back(new Rectangle("Rectangle", 30, 10));

	for (it = v.begin(); it != v.end(); it++) {
		Shape* s = *it;
		cout << *s << endl;
	}

	cout << "��� ������ �ι��!" << endl;
	for (it = v.begin(); it != v.end(); it++) {
		**it *= 2;
	}
	for (it = v.begin(); it != v.end(); it++) {
		cout << **it << endl;
	}

	
	return 0;
}