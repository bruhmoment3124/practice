#include <stdio.h>

/*find a number and it's power recursively*/
unsigned int power(int n, int p) /*number and power*/
{
	if(n <= 0 || p <= 0) return 1;
	return n * power(n, (p - 1));
}

int main(void)
{
	int n, p; /*number and power*/
	printf("enter in a number:\n");
	scanf("%d", &n);
	printf("enter in the power:\n");
	scanf("%d", &p);
	printf("%d to the %d power: %d\n", n, p, power(n, p));

	return 0;
}
