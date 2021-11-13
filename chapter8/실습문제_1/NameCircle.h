#ifndef _NameCircle_h
#define _NameCircle_h
#include "Circle.h"
class NameCircle : public Circle
{
	char* name;

public:
	NameCircle(int radius = 0, const char* name = "");
	~NameCircle();

	void setName(const char* name);
	void show();

	static char* big(NameCircle circles[], int size);
};
#endif // !_NameCircle_h