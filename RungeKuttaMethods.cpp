#include "RungeKuttaMethods.h"
#include "math.h"



void RungeKuttaMethod(double x0, double y0, double* x, double* y, int num_iters, double del, int order, double (*g)(double, double)){
	for(int i=0; i<num_iters; i++){
		x[i] = x[0]+ i*del;
		if(i==0){
			y[i]=y0;
			continue;
		}
		if(order==2)
			y[i] = y[i-1]+ (del/2)*g(x[i-1], y[i-1])+(del/2)*(g(x[i], y[i-1]+del*g(x[i-1], y[i-1])));
		else if(order==4){
			double k1 = del*g(x[i-1], y[i-1]);
			double k2 = del*g(x[i-1]+del/2, y[i-1]+k1/2);
			double k3 = del*g(x[i-1]+del/2, y[i-1]+k2/2);
			double k4 = del*g(x[i-1]+del, y[i-1]+k3);
			y[i] = y[i-1]+(1/6)*(k1+2*k2+2*k3+k4);
		}
	}
	return;
}


