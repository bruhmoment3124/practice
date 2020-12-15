/*P.S: the printed value will start at 0, keep that in mind. So, 
for instance if you enter in 5 it will start at 0 and go up to 45*/
#include <stdio.h>

int main(void)
{
	int i; /*initializers*/ 
	int n = 0; /*number multplied by num*/
	int num, sum; /*number and sum*/
	printf("enter in a number:\n");
	scanf("%d", &num); /*scans for number*/
	
	/*multiplication table*/
	for(i=0; i<10; i++)
	{
		sum = num * n++;
		printf("%d\n", sum);
	}
	
	return 0;
}
