#ifndef _Subtractor_h
#define _Subtractor_h
#include "Calculator.h"
class Subtractor :
    public Calculator
{
protected:
    int calc(int a, int b);
};
#endif // !_Subtractor_h