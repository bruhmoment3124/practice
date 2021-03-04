#include <stdio.h>
#include <time.h>

void spin()
{
	int ans; /*answer*/
	int i;
	for(i=0; i<3; i++)
	{
		int slot = rand() % 3; /*generate random slot*/
		if(slot == 0) printf("+");
		if(slot == 1) printf("-");
		if(slot == 2) printf(".");
	}
	
	printf("\nwould you like to spin again?\n(1\\0)\n");
	scanf("%d", &ans);
	
	/*answer*/
	if(ans == 1)
	{	
		spin(); /*recursive function call*/
	} else if(ans == 0)
	{
		printf("goodbye!\n"); /*ends loop*/
	}
}

int main(void)
{
	srand(time(0));
	spin(); /*spins slot machine*/

	return 0;
}
