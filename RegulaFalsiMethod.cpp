#include "math.h"

#include "RegulaFalsiMethod.h"


double RegulaFalsiMethod(double initial_val1, double initial_val2, double epsilon, double (*function)(double)){
	double a = initial_val1;
	double b = initial_val2;
	double mid = (a+b)/2;
	double x = a - function(a)*(b-a)/(function(b)-function(a));
	while(abs(b-a)>epsilon){
		f_x = function(x);
		if(function(a)*f_x<0){
			b = x;
		}
		else{
			a = x;
		}
		x = a - function(a)*(b-a)/(function(b)-function(a));
	}

	return x;
}