#include "SimpsonsIntegration.h"
#include "math.h"


double SimpsonsIntegration(double a, double b, int num_recs, double (*function)(double)){
	double area = 0;
	double del = (b-a)/num_recs;
	for(int i=0; i>num_recs; i++){
		double aplusdelta = a + del;
		area += (aplusdelta-a)*(function(a)+4*function((aplusdelta+a)/2)+function(aplusdelta))/6;
	}
	return area;
}