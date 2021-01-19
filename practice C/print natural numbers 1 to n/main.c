#include <stdio.h>

/*prints natural numbers 1 to n*/
int natnum(int n)
{
	int i;
	for(i=1; i<n; i++)
	{
		printf("%d\n", i);
	}
	
	return i;
}

int main(void)
{
	int n; /*number*/
	printf("enter in a number:\n");
	scanf("%d", &n);
	printf("1 to n:\n");
	printf("%d", natnum(n));
	
	return 0;
}