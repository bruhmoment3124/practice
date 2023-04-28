#include <stdio.h>
#include <math.h>

double fracexp(double n, int times)
{
	if(times != 0) return fracexp(2.0 + (4.0 / n), times-1);
	
	return n;
}

int main(void)
{
	int times = 200;
	double n = 1.0, x = 55;
	
	n = fracexp(n, times);
	printf("%.50f\n", n);
	getchar();
	
	return 0;
}