#include <stdio.h>

int main(void)
{
	float b, h, a; /*base, height and area*/
	printf("enter in the base:\n");
	scanf("%f", &b);
	printf("enter in the height\n");
	scanf("%f", &h);

	/*base halfed then multiplied by height*/
	a = b * .5 * h;
	printf("output:\n%f", a);
	
	return 0;
}
