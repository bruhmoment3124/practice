#include <stdio.h>

int divisors(int n)
{
	int numdiv = 0;
	for(int i = n; i>=1; i--)
	{
		if(n % i == 0)
		{
			numdiv += 1;
		}
	}
	
	return numdiv;
}

int main(void)
{
	int n = 785221;
	printf("%d has %d divisors\n", n, divisors(n));
	getchar();
	
	return 0;
}