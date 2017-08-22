#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
	Calculator(){ result = 0; }
	double add(double a, double b);
	double sub(double a, double b);
	double mult(double a, double b);
	double div(double a, double b);
	double lastAnswer();
private:
	double result;
};

#endif