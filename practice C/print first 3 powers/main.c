#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	float n; /*number*/
	printf("enter in a number:\n");
	scanf("%f", &n);
	
	printf("output:\n");
	for(i=1; i<4; i++)
	{
		printf("%f\n", pow(n, i));
	}

	return 0;
}
