#ifndef _Circle_h
#define _Circle_h

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	Circle(const Circle& c); //복사생성자 선언
	double getArea(void) { return radius * radius * 3.14; }
};
#endif // !_Circle_h

