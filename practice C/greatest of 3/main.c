#include <stdio.h>

int main(void)
{
	/*number variables*/
	int num1; /*number 1*/
	int num2; /*number 2*/
	int num3; /*number 3*/
	
	/*gets value for each number*/
	printf("enter in number 1:\n");
	scanf("%d", &num1); /*gets number 1*/
	printf("enter in number 2:\n");
	scanf("%d", &num2); /*gets number 2*/
	printf("enter in number 3:\n");
	scanf("%d", &num3); /*gets number 3*/
	
	/*compares number 1, 2 and 3*/
	if(num1 > num2 && num3)
	{
		printf("number 1 is the greatest\n");
	} else if(num2 > num3 && num1)
	{
		printf("number 2 is the greatest\n");
	} else if(num3 > num1 && num2)
	{
		printf("number 3 is the greatest");
	} else
	{
		printf("invalid character\n");
	}
	
	return 0;
}