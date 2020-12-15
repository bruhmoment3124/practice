#include <stdio.h>

int main(void)
{
	char c; /*character*/
	printf("enter in a character:\n");
	scanf("%c", &c);
	
	/*checks for character*/
	switch(c)
	{
		/*vowels*/
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("you entered a vowel");
		break;
		
		/*consonant*/
		default:
			printf("you entered a consonant");
	}	
	
	return 0;
}
