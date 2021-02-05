#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0)); /*random*/
	int tile; /*tiles in the maze*/

	int i, j;
	for(i=0; i<25; i++) /*generates random maze*/
	{
		tile = rand() % 2;
		if(tile == 0) printf("%c\n", 219); /*wall*/
		if(tile == 1) printf("%c\n", 176); /*floor*/

		for(j=0; j<50; j++)
		{
			tile = rand() % 2;
			if(tile == 0) printf("%c", 219); /*wall*/
			if(tile == 1) printf("%c", 176); /*floor*/
		}
	}


	return 0;
}
