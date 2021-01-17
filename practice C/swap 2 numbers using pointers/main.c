#include <stdio.h>

int main(void)
{
	int *p1, *p2; /*pointer 1 and pointer 2*/
	int NUM1, NUM2; /*number 1 and number 2*/
	
	printf("enter number 1:\n");
	scanf("%d", &NUM1);
	printf("enter number 2:\n");
	scanf("%d", &NUM2);
	
	p1 = &NUM2;
	p2 = &NUM1;
	
	printf("number 1: %d\n", *p1);
	printf("number 2: %d\n", *p2);
	
	return 0;
}