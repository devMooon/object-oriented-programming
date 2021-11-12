#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Square.h"

using std::cout;
using std::endl;

int main(void)
{
	Polygon* polygon[3];
	polygon[0] = new Rectangle(2, 4);
	polygon[1] = new Triangle(4, 8);
	polygon[2] = new Square(4);

	for (int i = 0; i < 3; i++) {
		cout << i + 1 << "번 도형의 넓이 :" << polygon[i]->GetArea();

		Rectangle* r = dynamic_cast<Rectangle*>(polygon[i]);
		if (r != NULL) { //Rectangle혹은 Rectangle의 파생 객체
			if (r->IsSquare()) cout << " '정사각형'";
			else  cout << " '사각형'";
		}
		cout << endl;	
	}
	return 0;
}