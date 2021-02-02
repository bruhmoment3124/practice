#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2, p1, p2, slope; /*coordinates and slope*/

	printf("enter in x1:\n");
	scanf("%d", &x1);
	printf("enter in y1:\n");
	scanf("%d", &y1);
	printf("enter in x2:\n");
	scanf("%d", &x2);
	printf("enter in y2:\n");
	scanf("%d", &y2);

	p1 = y2 - y1; /*point 1*/
	p2 = x2 - x1; /*point 2*/
	slope = p2 / p1; /*slope*/

	if(slope < 0) /*negative*/
	{
		printf("the slope is negative\n");
	} else if(slope > 0) /*positive*/
	{
		printf("the slope is positive\n");
	}

	return 0;
}
