#include "calculator.h"

int Calculator::Add(int a, int b)
{
    return a + b;
}

int Calculator::Mul(double a, double b)
{
    
    return static_cast<int>(a * b);
}

int Calculator::Sub(int a, int b)
{
    return a - b;
}

