#include <stdio.h>

int main(void)
{
	int *p1, *p2; /*pointer 1 and pointer 2*/
	int NUM1, NUM2, SUM; /*number 1, number 2 and sum*/
	
	printf("enter number 1:\n");
	scanf("%d", &NUM1);
	printf("enter number 2:\n");
	scanf("%d", &NUM2);
	
	p1 = &NUM1;
	p2 = &NUM1;
	
	SUM = *p1 += *p2;
	printf("output: %d", SUM);
	
	return 0;
}