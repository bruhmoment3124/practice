#include <stdio.h>

int main(void)
{
	int i, j;
	int a[6] = {0, 1, 2, 3, 4, 5}; /*array*/
	
	/*scans for inserted element*/
	printf("what would you like to insert:\n");
	scanf("%d", &i);
	
	/*prints all elements in the array including the inserted element*/
	printf("output:\n");
	for(j=0; j<7; j++)
	{
		printf("%d\n", a[j]);
	}
	
	return 0;
}