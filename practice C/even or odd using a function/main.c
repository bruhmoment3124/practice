#include <stdio.h>

void evenodd(int n)
{
	if(n % 2 == 0)
	{
		printf("the number you entered is even");
	} else if(n % 2 == 1)
	{
		printf("the number you entered is odd");
	}
}

int main(void)
{
	int n; /*number*/
	printf("enter in a number:\n");
	scanf("%d", &n);
	evenodd(n);
	
	return 0;
}