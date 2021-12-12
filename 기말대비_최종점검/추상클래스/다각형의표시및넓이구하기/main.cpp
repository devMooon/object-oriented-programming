#include "Polygon.h"
#include "Rectangle.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main(void)
{
	//그냥 동적할당 배열 //기본 생성자 필요함
	//Polygon* p = new Polygon[3];

	//포인터 배열로 동적할당된 배열
	Polygon* p[3];
	p[0] = new Rectangle(4, 5, "Rectangle");

	//벡터로 구현 //상속 관계에 있는 클래스들을 모두 유지하고 싶으면, 
	//업캐스팅을 해야 하기 때문에 포인터 변수로 객체의 참조자료형을 지정 해야함
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