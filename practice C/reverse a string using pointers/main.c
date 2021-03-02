#include <stdio.h>

int main(void)
{
	char *p, str[50]; /*pointer and string*/
	printf("enter in a string:\n");
	scanf("%s", &str);
	
	p = (char *)&str; /*point to string*/
	
	printf("reverse: %s\n", strrev(p)); /*reverse string*/
	
	return 0;
}
