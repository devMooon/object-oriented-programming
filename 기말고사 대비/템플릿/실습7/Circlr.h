#ifndef _Circlr_h
#define _Circlr_h

#include "Comparable.h"
class Circlr :
    public Comparable
{
public:
    bool operator<(const Comparable& comparable) const;
    bool operator>(const Comparable& comparable) const;
};
#endif // !_Circlr_h