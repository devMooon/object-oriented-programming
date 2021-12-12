#ifndef _Polygon_h
#define _Polygon_h
class Polygon
{
protected:
	double width;
	double height;
	char* type;

public:
	Polygon(double width, double height, const char* type); 
	Polygon(const Polygon& polygon);
	~Polygon();

	void showInfo();

	virtual double GetArea() = 0;
};
#endif // !_Polygon_h