#include "math.h"

#include "BisectionMethod.h"


double BisectionMethod(double initial_val1, double initial_val2, double epsilon, double (*function)(double)){
	double a = initial_val1;
	double b = initial_val2;
	double mid = (a+b)/2;
	double f_mid = function(mid);
	while(abs(b-a)>epsilon){
		f_mid = function(mid);
		if(function(a)*f_mid<0){
			b = mid;
		}
		else{
			a = mid;
		}
		mid = (a+b)/2;
	}

	return mid;
}