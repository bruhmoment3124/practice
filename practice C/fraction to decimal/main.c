#include <stdio.h>

int main(void)
{
	float n, d, sum; /*numerator, denominator and sum*/
	printf("enter in the numerator:\n");
	scanf("%f", &n);
	printf("enter in the denominator:\n");
	scanf("%f", &d);

	/*prints decimal number*/
	sum = n / d;
	printf("number:\n");
	printf("%f", sum);
	
	return 0;
}
