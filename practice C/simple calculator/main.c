#include <stdio.h>

int main(void)
{
	char operator;
	int num1;
	int num2;
	int sum;
	printf("What operator do you choose:\n");
	scanf("%c", &operator);
	printf("Enter number 1:\n");
	scanf("%d", &num1);
	printf("Enter number 2:\n");
	scanf("%d", &num2);
	
	switch(operator)
	{	
		case '+':
			sum = num1+num2;
			printf("%d", sum);
		break;
		
		case '-':
			sum = num1-num2;
			printf("%d", sum);
		break;
		
		case '*':
			sum = num1*num2;
			printf("%d", sum);
		break;
		
		case '/':
			sum = num1/num2;
			printf("%d", sum);
		break;
		
		default:
		printf("Invalid operator");
	}
	
	return 0;
}
