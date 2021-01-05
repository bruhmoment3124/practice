#include <stdio.h>

int main(void)
{
	char c; /*character*/
	printf("enter in a character:\n");
	scanf("%c", &c);
	
	if(c == 'a')
	{
		printf("you entered a vowel\n");
	} else if(c == 'e')
	{
		printf("you entered a vowel\n");
	} else if(c == 'i')
	{
		printf("you entered a vowel\n");
	} else if(c == 'o')
	{
		printf("you entered a vowel\n");
	} else if(c == 'u')
	{
		printf("you entered a vowel\n");
	} else
	{
		printf("you entered a consonant\n");
	}
	
	return 0;
}