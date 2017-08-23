#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
	void add(double a, double b);
	double getResult(){ return result;}
private:
	double result;
};

#endif