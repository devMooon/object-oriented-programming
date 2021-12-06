#pragma once
#include "NewCalculator.h"
class Subtractor :
    public NewCalculator
{
    int calc(int a, int b) { return a - b;  }
};

