#include <stdio.h>

int main(void)
{
	int a1[5] = {1, 2, 3, 4, 5}; /*array 1*/
	int a2[5]; /*array 2*/
	
	int i;
	for(i=0; i<5; i++)
	{
		a2[i] = a1[i]; /*copies array 1 into array 2*/
		printf("%d ", a1[i]); /*prints array 1*/
		printf("%d\n", a2[i]); /*prints array 2*/
	}

	return 0;
}
