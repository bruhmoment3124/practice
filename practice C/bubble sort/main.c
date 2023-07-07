#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int arr[10];
	
	int i;
	for(i = 0; i<10; i++) arr[i] = i+1;
	
	int j;
	for(j = 0; j<10000; j++)
	{
		int randpos1 = rand() % 10;
		int randpos2 = rand() % 10;
		
		int temp1 = arr[randpos1];
		arr[randpos1] = arr[randpos2];
		arr[randpos2] = temp1;
	}
	
	while(1)
	{
		int k;
		for(k = 0; k<10; k++)
		{
			if(k < 9 && arr[k+1] < arr[k])
			{
				int temp1 = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp1;
			}
		}
		
		int l;
		for(l = 0; l<10; l++) printf("%d, ", arr[l]);
		printf("\n");
	}
	
	return 0;
}