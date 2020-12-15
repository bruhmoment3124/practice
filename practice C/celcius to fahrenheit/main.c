#include <stdio.h>

int main(void)
{
	float f,c; /*celcius and fahrenheit values*/
	char op; /*celcius or fahrenheit operator*/
	
	printf("enter in celcius or fahrenheit:\n");
	printf("c/f:\n");
	scanf("%c", &op);
	
	switch(op)
	{
		/*celcius*/
		case 'c':
			printf("enter in celcius:\n");
			scanf("%f", &c); /*celcius value*/
			
			/*convert celcius into fahrenheit*/
			c *= 1.8;
			f = c + 32;
			printf("%f", f);
		break;
		
		/*fahrenheit*/
		case 'f':
			printf("enter in fahrenheit:\n");
			scanf("%f", &f); /*fahrenheit value*/
			
			/*convert fahrenheit into celcius*/
			f -= 32;
			c = f * .55555556;
			printf("%f", c);
		break;
		
		default:
			printf("invailid operator");
	}
	
	return 0;
}