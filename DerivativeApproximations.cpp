#include "DerivativeApproximations.h"
#include "math.h"

double backwardDifference(double x, double h, double (*function)(double)){
	return (-1*function(x-h)+function(x))/h;
}


double fowardDifference(double x, double h, double (*function)(double)){
	return (function(x+h)-function(x))/h;
}


double centralDifference(double x, double h, double (*function)(double)){
	return (function(x+h)-function(x-h))/(2*h);
}
