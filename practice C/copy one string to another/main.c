#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[50], str2[50]; /*string 1 and string 2*/
	printf("enter string 1:\n");
	scanf("%s", &str1);
	strcpy(str2, str1); /*copies string 1 to string 2*/
	printf("string 2: %s", str2);
	
	return 0;
}