#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = {1, 2, 3, 4, 5}; /*array*/
	
	printf("what element would you like to access:\n");
	scanf("%d", &i); /*scans for element*/
	printf("the %d element is:\n", i);
	printf("%d", a[i]); /*prints element*/
	
	return 0;
}