#ifndef CALCULATOR_H
#define CALCULATOR_H
#include "calculator.h"


class calculator
{
	private:
        float a;
        float b;
	public:
       calculator();
       float add(float, float);
       float Subtract(float, float);
       float divide(float, float);
       float multiply(float, float);
       float percent (float, float);
       void intergration ();
       void derivation();
       void Execute();

};

#endif // CALCULATOR_H
