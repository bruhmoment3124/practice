#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	
	printf("Enter number 1:\n");
	scanf("%d", &num1);
	printf("Enter number 2:\n");
	scanf("%d", &num2);
	
	/*compares number 1 and number 2
	to see if 1 is larger than 2*/
	if(num1 > num2)
   {
		printf("Number 1 is greater than number 2\n");
	}
	
	if(num1 < num2)
	{
		printf("Number 2 is greater than number 1\n");
	}
	
	/*compares number 1 and number 2 
	to see if they are the same*/
	if(num1 == num2)
	{
		printf("Number 1 and number 2 are the same\n");
	}
	
	return 0;
}