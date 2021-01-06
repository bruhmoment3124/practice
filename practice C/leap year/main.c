#include <stdio.h>

int main(void)
{
	int year;
	printf("enter in a year\n");
	scanf("%d", &year);
	
	if(year % 400 && 4 && 100)
	{
		printf("the year is a leap year\n");
	} else
	{
		printf("the year is not a leap year\n");
	}
	
	return 0;
}