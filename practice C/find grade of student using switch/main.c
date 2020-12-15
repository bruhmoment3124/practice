#include <stdio.h>

int main(void)
{
	int g; /*grade*/
	printf("enter in your grade\n");
	scanf("%d", &g);

	switch(g)
	{
		case 90 ... 100:
			printf("you got an A\n");
		break;

		case 80 ... 89:
			printf("you got a B\n");
		break;

		case 70 ... 79:
			printf("You got a C\n");
		break;

		case 60 ... 69:
			printf("you got a D\n");
		break;

		case 50 ... 59:
			printf("you got an E\n");
		break;

		case 40 ... 49:
			printf("you got an E-\n");
		break;

		case 0 ... 39:
			printf("you got an F\n");
		break;

		default:
			printf("invalid grade\n");
	}
	
	return 0;
}
