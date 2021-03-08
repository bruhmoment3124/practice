#include <stdio.h>

int main(void)
{
	int *p[5], a[5]; /*pointer and array*/
	printf("enter 5 array elements:\n");

	int i, j;
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]); /*scan for pointer*/
		p[i] = a[i]; /*point to array*/
	}
	
	printf("elements in (pointer) array:\n");
	for(j=0; j<5; j++) printf("%d\n", p[j]); /*print array*/
	

	return 0;
}
