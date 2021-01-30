#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p; /*pointer*/
	char str1[30] = "Hello ";
	char str2[30] = "World!";
	
	p = &str1;
	
	strcat(p, str2); /*connect string 2 to the pointer*/
	
	printf("string: %s", p);
	
	return 0;
}