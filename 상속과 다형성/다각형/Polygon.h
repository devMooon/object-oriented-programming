#ifndef _Polygon_h
#define _Polygon_h
#include <iostream>

using std::ostream;

class Polygon
{
protected:
	double width;
	double height;
	char* type;

public:
	Polygon();
	Polygon(double width, double height, const char* type);
	Polygon(const Polygon& polygon);
	~Polygon();

	Polygon& operator=(const Polygon& polygon);
	friend ostream& operator<<(ostream& os, const Polygon& polygon);

	void ShowInfo() const;
	virtual double GetArea() = 0;
};


#endif // !_Polygon_h