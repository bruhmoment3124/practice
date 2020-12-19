#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100]; /*string*/
	printf("enter in a string:\n");
	scanf("%s", &s);
	printf("string length:\n%d", strlen(s));
	
	return 0;
}
