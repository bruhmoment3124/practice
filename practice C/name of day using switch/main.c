#include <stdio.h>

int main(void)
{
	int d; /*day*/
	printf("what day is it:\n");
	printf("(enter in a number)\n");
	scanf("%d", &d); /*gets day number*/

	switch(d)
	{
		/*sunday*/
		case 1:
			printf("today is sunday\n");
		break;

		/*monday*/
		case 2:
			printf("today is monday\n");
		break;

		/*tuesday*/
		case 3:
			printf("today is tuesday\n");
		break;

		/*wednesday*/
		case 4:
			printf("today is wednesday\n");
		break;
		
		/*thursday*/
		case 5:
			printf("today is thursday\n");
		break;

		/*friday*/
		case 6:
			printf("today is friday\n");
		break;

		/*saturday*/
		case 7:
			printf("today is saturday\n");
		break;
		
		default:
			printf("invalid day\n");
	}
	
	return 0;
}
