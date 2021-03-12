#include <stdio.h>

int main(void)
{
	int neg = 0;
	int a[6] = {-1, -2, -3, 1, 2, 3}; /*array*/
	
	int i;
	for(i=0; i<6; i++)
	{
		if(a[i] < 0) neg++; /*if element is below zero*/
	}
	printf("number of negative elements:\n%d", neg);

	return 0;
}
