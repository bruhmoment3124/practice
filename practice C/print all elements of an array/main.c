#include <stdio.h>

int main(void)
{
	int i, j;
	int a[5]; /*array*/
	printf("enter in 5 numbers:\n");
	
	/*scans all elements in an array*/
	for(j=0; j<5; j++)
	{
		scanf("%d", &a[j]);
	}
	
	/*prints all elements in an array*/
	printf("you entered:\n");
	for(i=0; i<5; i++)
	{
		printf("%d\n", a[i]);
	}		
	
	return 0;
}