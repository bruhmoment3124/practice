#include <stdio.h>

int main(void)
{
	char c; /*character*/
	
	printf("enter in a character:\n");
	scanf("%c", &c);
	
	/*gets ascii value for character*/
	if(c >= 65 && c <= 90) /*uppercase*/
	{
		printf("uppercase character\n");
	} else if(c >= 97 && c <= 122) /*lowercase*/
	{	
		printf("lowercase character\n");
	} else if(c >= 48 && c <= 57)
	{
		printf("digit\n");
	} else if(c >= 32 && c <= 47) /*special characters*/
	{
		printf("special character\n");
	} else if(c >= 58 && c <= 64)
	{
		printf("special character\n");
	} else if(c >= 91 && c <= 96)
	{
		printf("special character\n");
	} else if(c >= 123 && c <= 126)
	{
		printf("special character\n");
	}
	
	return 0;
}