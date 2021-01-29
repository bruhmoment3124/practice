#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p; /*character pointer*/
	char str[30] = "Hello World!"; /*string*/
	
	p = &str;
	
	printf("length of string: %d", strlen(p)); /*string length*/
	
	return 0;
}