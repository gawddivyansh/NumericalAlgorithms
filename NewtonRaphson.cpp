#include "math.h"

#include "NewtonRaphson.h"


double runIteration(double x, double (*differential)(double), double (*function)(double)){
	return x-function(x)/differential(x);
}

double NewtonRaphson(double initial_val, double epsilon, double (*differential)(double), double (*function)(double)){
	double prev = initial_val;
	double x = runIteration(prev, double (*differential)(double), double (*function)(double));
	while(abs(prev-x)>epsilon){
		prev = x;
		x = runIteration(prev, double (*differential)(double), double (*function)(double));
	}

	return x;
}