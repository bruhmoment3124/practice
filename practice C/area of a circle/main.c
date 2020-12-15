#include <stdio.h>

int main(void)
{
	float area;
	float radius;
	float pi = 3.14;
	
	printf("enter in the radius of the circle:\n");
	scanf("%f", &radius);
	area = pi*radius*radius;
	printf("The area is: ");
	printf("%f", area);
	
	return 0;
}
