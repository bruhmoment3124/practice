#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[25]; /*string*/
	printf("enter in a string:\n");
	scanf("%s", &s);
	printf("reverse: %s", strrev(s)); /*prints the reversed string*/
	
	return 0;
}