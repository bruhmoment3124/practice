#include <stdio.h>

int main(void)
{
	int n; /*number*/
	printf("enter in a number:\n");
	scanf("%d", &n);

	if(n % 2 == 0) /*even*/
	{
		printf("the number you entered is even\n");
	} else if(n % 2 == 1) /*odd*/
	{
		printf("the number you entered is odd\n");
	} else /*invalid*/
	{
		printf("invalid character\n");
	}
	
	return 0;
}
