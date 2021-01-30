#include <stdio.h>
#include <string.h>

int main(void)
{
	char *p; /*pointer*/
	char str1[30] = "Hello World!";
	char str2[30];
	
	p = &str1; /*pointer equals string 1*/
	strcpy(str2, p); /*copies the string*/
	printf("string 2: %s", str2); /*prints string*/
	
	return 0;
}