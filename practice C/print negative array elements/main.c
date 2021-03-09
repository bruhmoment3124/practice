#include <stdio.h>

int main(void)
{
	int a[5] = {-1, -2, 3, -4, 5}; /*array*/
	
	int i, j;
	printf("negative elements:\n");
	for(i=0; i<5; i++)
	{
		if(a[i] < 0) printf("%d ", a[i]); /*print negative elements*/
	}
	
	return 0;
}
