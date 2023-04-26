#include "math.h"

#include "FixedPointMethod.h"


double runIteration(double x, double (*function)(double)){
	return function(x);
}

double FixedPointMethod(double initial_val, double epsilon, double (*function)(double)){
	double prev = initial_val;
	double x = runIteration(prev, double (*function)(double));
	while(abs(prev-x)>epsilon){
		prev = x;
		x = runIteration(prev, double (*function)(double));
	}

	return x;
}