#include <stdio.h>

int cube(int n1)
{
	int n2;
	n2 = n1 * n1; /*number 2 equals the number multiplied by itself*/
	n2 *= n1; /*then multiply the 2 numbers by number 1*/
}

int main(void)
{
	int n;
	printf("enter in a number:\n");
	scanf("%d", &n);
	printf("cube: %d", cube(n));
	
	return 0;
}