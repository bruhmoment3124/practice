#include <stdio.h>

int main(void)
{
	char c; /*character*/
	printf("enter a character:\n");
	scanf("%c", &c);
	
	if(c <= 122 && c >= 65) /*if ascii value is between 65 and 122*/
	{
		printf("you entered an alphabetical character\n");
	} else
	{
		printf("you did not enter an alphabetical character");
	}
	
	return 0;
}