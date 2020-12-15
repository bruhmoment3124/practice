#include <stdio.h>

int main(void)
{
	int ang1, ang2, ang3; /*angle 1, angle 2 and angle 3*/
	int sum; /*sum of all angles*/ 
	
	printf("enter angle 1:\n");
	scanf("%d", &ang1);
	printf("enter angle 2:\n");
	scanf("%d", &ang2);
	printf("enter angle 3:\n");
	scanf("%d", &ang3);

	sum = ang1 + ang2;
	sum = sum + ang3;

	/*checks if the sum of a triangles angles equal 180*/
	if(sum == 180)
	{
		printf("this is a valid triangle");
	} else if(sum != 180)
	{
		printf("this is a invalid triangle");
	}

	return 0;
}
