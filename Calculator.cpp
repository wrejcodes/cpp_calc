#include "Calculator.h"

double Calculator::add(double a, double b){
	result = a + b;
	return result;
}
double Calculator::sub(double a, double b){
	result = a - b;
	return result;
}	
double Calculator::mult(double a, double b){
	result = a*b;
	return result;
}	
double Calculator::div(double a, double b){
	result = a/b;
	return result;
}	
double Calculator::lastAnswer(){
	return result;
}