#ifndef _Comparable_h
#define _Comparable_h
class Comparable
{
protected:
	int radius;

public:
	virtual bool operator<(const Comparable& comparable) const = 0;
	virtual bool operator>(const Comparable& comparable) const = 0;
};
#endif // !_Comparable_h