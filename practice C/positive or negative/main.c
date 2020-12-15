#include <stdio.h>

int main(void)
{
	int num;
	
	printf("Enter in a number:\n");
	scanf("%d", &num);
	
	/*positive*/
	if(num > 0)
	{
		printf("The number you entered is positive");
	}
	
	/*negative*/
	if(num < 0)
   {
		printf("The number you entered is negative");
	}
	
	/*zero*/
	if(num == 0)
	{
		printf("You entered in zero");
	}
	
	return 0;
}