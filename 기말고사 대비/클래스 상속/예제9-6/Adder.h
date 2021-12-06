#pragma once
#include "NewCalculator.h"
class Adder :
    public NewCalculator
{
    int calc(int a, int b) { return a + b; }
};

