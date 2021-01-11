#include <stdio.h>

int main(void)
{
	int i, j, k; 
	printf("enter in number 1:\n");
	scanf("%d", &i);
	printf("enter in number 2:\n");
	scanf("%d", &j);
	
	k = i / j;
	printf("constant of proportionality: %d", k);
	
	return 0;
}