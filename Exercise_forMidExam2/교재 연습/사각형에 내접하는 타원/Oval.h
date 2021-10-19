#ifndef _Oval_h
#define _Oval_h

#include <iostream>
using std::cout;
using std::endl;

class Oval {
	int width;
	int height;

public:
	Oval();
	Oval(int width, int height);
	~Oval();

	int getWidth(void) const;
	int getHeight(void) const;

	void set(int w, int h);
	void show(void) const;
};
inline Oval::Oval() :Oval(1, 1) {};
inline Oval::Oval(int width, int height) :width(width), height(height) {};
inline Oval::~Oval()
{
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl; 
};
inline int Oval::getWidth(void) const
{
	return width;
};
inline int Oval::getHeight(void) const
{
	return height;
};
#endif // !_Oval_h


