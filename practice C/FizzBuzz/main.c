#include <stdio.h>

int main(void)
{
	int i;
	for(i=1; i<16; i++)
	{
		if(i % 3 == 0) printf("Fizz");
		if(i % 5 == 0) printf("Buzz");
		if(i % 5 && 3 == 0) printf("FizzBuzz");
		printf("%d\n", i);
	}
	
	return 0;
}