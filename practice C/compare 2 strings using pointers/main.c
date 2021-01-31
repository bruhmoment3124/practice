#include <stdio.h>
#include <string.h>

int main(void)
{
	int comp; /*compare*/
	char *p1, *p2; /*pointer 1 and pointer 2*/
	char str1[30] = "Hello World!"; /*string 1*/
	char str2[30] = "Hello World!"; /*string 2*/
	
	p1 = &str1;
	p2 = &str2;
	
	comp = strcmp(p1, p2); /*compare pointer 1 and pointer 2*/
	
	if(comp < 0)
	{
		printf("pointer 1 is less than pointer 2\n");
	} else if(comp > 0)
	{
		printf("pointer 1 is greater than pointer 2\n");
	} else if(comp == 0)
	{
		printf("pointer 1 and 2 are the same\n");
	}
	
	return 0;
}