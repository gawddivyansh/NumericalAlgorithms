#include "EulerMethods.h"
#include "math.h"



void EulersMethod(double x0, double y0, double* x, double* y, int num_iters, double del, double (*g)(double, double)){
	for(int i=0; i<num_iters; i++){
		x[i] = x[0]+ i*del;
		if(i==0){
			y[i]=y0;
			continue;
		}
		y[i] = y[i-1]+ del*g(x[i-1], y[i-1]);
	}
	return;
}


