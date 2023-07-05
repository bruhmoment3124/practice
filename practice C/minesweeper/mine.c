#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printboard(char mat[10][10])
{
	printf("  ");
	int i;
	for(i = 0; i<10; i++) printf("%d ", i);
	printf("\n");
	
	int k;
	for(k = 0; k<10; k++)
	{
		printf("%d ", k);
		int l;
		for(l = 0; l<10; l++)
		{
			printf("%c ", mat[k][l]);
		}
		printf("\n");
	}
}

void createboard(char mat[10][10])
{
	srand(time(0));
	
	int i;
	for(i = 0; i<10; i++)
	{
		int j;
		for(j = 0; j<10; j++) mat[i][j] = '.';
	}
		
	int k;
	for(k = 0; k<10; k++)
	{
		int xpos = rand() % 10;
		int ypos = rand() % 10;
		
		while(mat[ypos][xpos] == '*')
		{
			xpos = rand() % 10;
			ypos = rand() % 10;
		}
		
		mat[ypos][xpos] = '*';
	}
		
	int l;
	for(l = 0; l<10; l++)
	{
		int m;
		for(m = 0; m<10; m++)
		{
			if(mat[l][m] != '*')
			{
				int bombs = 0;
					
				int carddir[8] = {mat[l-1][m]-42, mat[l][m+1]-42, mat[l+1][m]-42, mat[l][m-1]-42, 
				mat[l-1][m-1]-42, mat[l-1][m+1]-42, mat[l+1][m-1]-42, mat[l+1][m+1]-42};

				if(m == 0)
				{
					carddir[3] = -1;
					carddir[4] = -1;
					carddir[6] = -1;
				} else if(m == 9)
				{
					carddir[1] = -1;
					carddir[5] = -1;
					carddir[7] = -1;
				}
				
				int n;
				for(n = 0; n<8; n++) if(carddir[n] == 0) bombs++;
				if(bombs > 0) mat[l][m] = 48+bombs;
			}
		}
	}
}

int main(void)
{
	char concealmat[10][10], mat[10][10];
	createboard(mat);
	
	int i;
	for(i = 0; i<10; i++)
	{
		int j;
		for(j = 0; j<10; j++) concealmat[i][j] = '-';
	}
	
	while(1)
	{
		printboard(concealmat);
		printf("\n");
		
		int x, y;
		scanf("%d\n%d", &x, &y);
		concealmat[y][x] = mat[y][x];
	}
	
	return 0;
}