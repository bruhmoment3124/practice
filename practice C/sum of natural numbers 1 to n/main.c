#include <stdio.h>

/*sum of natural numbers 1 to n*/
int sum(int n)
{
	if(n == 0) return 0;
	return n * (n + 1) / 2;
}

int main(void)
{
	int n;
	printf("enter in a number:\n");
	scanf("%d", &n);
	printf("sum: %d", sum(n)); /*prints 15*/

	return 0;
}
