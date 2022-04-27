#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int maxnum;
	printf("enter max number:\n");
	scanf("%d", &maxnum);
	
	while(1)
	{
		srand(time(0));
		
		/* player input and final answer */
		int inp, sum;
		
		/* random numbers and operators list */
		int num1 = rand() % maxnum, num2 = rand() % maxnum;
		char oplist[4] = {'+', '-', '*', '/'};
		
		/* random operator */
		int rnd = rand() % 3;
		char op = oplist[rnd];
		
		switch(op)
		{
			case '+':
				printf("%d + %d = ", num1, num2);
				scanf("%d", &inp);
				
				sum = num1 + num2;
				if(inp == sum)
				{
					printf("%d is correct!\n", inp);
				} else
				{
					printf("%d is incorrect :(\n", inp);
				}
			break;
			
			case '-':
				printf("%d - %d = ", num1, num2);
				scanf("%d", &inp);
				
				sum = num1 - num2;
				if(inp == sum)
				{
					printf("%d is correct!\n", inp);
				} else
				{
					printf("%d is incorrect :(\n", inp);
				}
			break;
			
			case '*':
				printf("%d * %d = ", num1, num2);
				scanf("%d", &inp);
				
				sum = num1 * num2;
				if(inp == sum)
				{
					printf("%d is correct!\n", inp);
				} else
				{
					printf("%d is incorrect :(\n", inp);
				}
			break;
			
			case '/':
				printf("%d / %d = ", num1, num2);
				scanf("%d", &inp);
				
				sum = num1 / num2;
				if(inp == sum)
				{
					printf("%d is correct!\n", inp);
				} else
				{
					printf("%d is incorrect\n", inp);
				}
			break;
		}
	}
}