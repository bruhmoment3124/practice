#include <stdio.h>

int main(void)
{
	char s[100]; /*string*/
	printf("enter in a string:\n");
	scanf("%s", &s);
	printf("uppercase:\n%s", strupr(s));
	
	return 0;
}