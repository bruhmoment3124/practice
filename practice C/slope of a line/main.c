#include <stdio.h>

/*coordinates on the grid*/
struct coordinates
{
	float x1; /*x coordinate of point 1*/
	float y1; /*y coordinate of point 1*/
	float x2; /*x coordinate of point 2*/
	float y2; /*y coordinate of point 2*/
	float p1; /*point 1*/
	float p2; /*point 2*/
} c;

int main(void)
{
	printf("x1:\n");
	scanf("%f", &c.x1);
	
	printf("y1:\n");
	scanf("%f", &c.y1);

	printf("x2:\n");
	scanf("%f", &c.x2);
	
	printf("y2:\n");
	scanf("%f", &c.y2);

	float sum;
	/*point 2*/
	c.p2 = c.y2 -= c.y1;
	/*point 1*/
	c.p1 = c.x2 -= c.x1;
	/*the slope of the line*/
	sum = c.p2 / c.p1;
	printf("%f", sum);
	
	return 0;
}