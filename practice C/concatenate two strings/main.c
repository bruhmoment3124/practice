#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[30]; /*string 1*/ 
	char s2[30]; /*string 2*/
	printf("enter string 1:\n");
	scanf("%s", &s1); /*gets string 1*/
	printf("enter string 2:\n");
	scanf("%s", &s2); /*gets string 2*/
	strcat(s1, s2); /*conjoins string 2 to string 1*/
	printf("output:\n%s", s1); /*prints string 1*/
	
	return 0;
}
