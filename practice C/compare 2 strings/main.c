#include <stdio.h>
#include <string.h>

int main(void)
{
	int comp; /*compare*/
	char str1[60], str2[60]; /*string 1 and string 2*/
	
	printf("enter string 1:\n");
	scanf("%s", &str1);
	printf("enter string 2:\n");
	scanf("%s", &str2);
	
	comp = strncmp(str1, str2, 60);
	
	if(comp < 0)
	{
		printf("string 1 is less than string 2\n");
	} else if(comp > 0)
	{
		printf("string 1 is greater than string 2\n");
	} else if(comp == 0)
	{
		printf("string 1 and 2 are the same\n");
	}
	
	return 0;
}