#include <stdio.h>

/*factorial; recursively*/
int fact(int n)
{
	if(n == 0) return 1;
	return n * fact(n - 1); /*factorial formula*/
}

int main(void)
{
	int n; /*number*/
	printf("enter in a number:\n");
	scanf("%d", &n);
	printf("factorial of %d:\n%d", n, fact(n));

	return 0;
}
