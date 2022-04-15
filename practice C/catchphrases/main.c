#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[1])
{
	char *words[81] = 
	{
		"HMMM ", "HUH ", "OH ", "OUCH ", "WOW ", "", "ALL ", "BOOMER ", "GAME ", "I ", "INSECT ", "IT ",
		"LANDFALL ", "ME ", "MY ", "PLAYER ", "RESPECT ", "TABG ", "THAT ", "THE ", "THEM ", "THEY ",
		"WE ", "YOU ", "CANT ", "DONT ", "FOR ", "HOW ", "IN ", "NO ", "NOT ", "OF ", "OFF ", "ON ", "OR ",
		"WHAT ", "WHEN ", "WHERE ", "WHO ", "WHY ", "WONT ", "YES ", "ALIVE ", "BAD ", "BEST ", "BIG ",
		"BLUE ", "DEAD ", "FAST ", "GOOD ", "MEAN ", "NICE ", "OK ", "RED ", "RICH ", "RIGHT ", "SAD ",
		"SLOW ", "SMALL ", "SMART ", "WRONG ", "AM ", "ARE ", "BE ", "DIE ", "EAT ", "GET ", "GIVE ", "HELLO ",
		"HIT ", "IS ", "KILL ", "KILLED ", "LET ", "PLEASE ", "RUN ", "SHOOT ", "STOP ", "TAKE ", "TRY ", "WORK "
	};
	
	srand(time(0)); /*seed*/
	
	int count;
	if(argv[1] != NULL)
	{
		count = atoi(argv[1]);
	} else
	{
		printf("how many catchphrases would you like to generate?\n");
		scanf("%d", &count);
	}
	
	int i, k;
	for(i=0; i<count; i++) /*generate a certain amount of catchphrases*/
	{
		for(k=0; k<3; k++) /*generate a catchphrase 3 words in length*/
		{
			int rnd = rand() % 81;
			printf("%s", words[rnd]);
		}
		printf("\n");
	}
	
	return 0;
}