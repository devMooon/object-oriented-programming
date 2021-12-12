#include "Polygon.h"
#include "Rectangle.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main(void)
{
	//�׳� �����Ҵ� �迭 //�⺻ ������ �ʿ���
	//Polygon* p = new Polygon[3];

	//������ �迭�� �����Ҵ�� �迭
	Polygon* p[3];
	p[0] = new Rectangle(4, 5, "Rectangle");

	//���ͷ� ���� //��� ���迡 �ִ� Ŭ�������� ��� �����ϰ� ������, 
	//��ĳ������ �ؾ� �ϱ� ������ ������ ������ ��ü�� �����ڷ����� ���� �ؾ���
	vector<Polygon*> polygonV;
	vector<Polygon*>::iterator polygonItr;

	polygonV.push_back(new Rectangle(4, 5, "Rectangle"));
	polygonV.push_back(new Rectangle(4, 5, "Rectangle"));

	for (polygonItr = polygonV.begin(); polygonItr != polygonV.end(); polygonItr++) {
		Rectangle* rec;
		rec = dynamic_cast<Rectangle*>(*polygonItr);
		if (rec != NULL) {
			rec->showInfo();
		}
	}
	return 0;
}