#include "math.h"

#include "SecantMethod.h"


double runIteration(double x, double prev, double (*function)(double)){
	return x-function(x)*(x-prev)/(function(x)-function(prev));
}

double SecantMethod(double initial_val1, double initial_val2, double epsilon, double (*differential)(double), double (*function)(double)){
	double prev1 = initial_val1;
	double prev2 = initial_val2;
	double x = runIteration(prev1, prev2, double (*function)(double));
	while(abs(prev2-x)>epsilon){
		prev1 = prev2;
		prev2 = x;
		x = runIteration(prev1, prev2, double (*function)(double));
	}

	return x;
}