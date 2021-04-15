#include <stdio.h>
#include <stdlib.h>

void morse(char *str)
{
	int i;
	for(i=0; i<str[i]; i++)
	{
		switch(str[i])
		{
			case 'a':
				printf(".- ");
			break;
	
			case 'b':
				printf("-... ");
			break;
		
			case 'c':
				printf("-.-. ");
			break;
		
			case 'd':
				printf("-.. ");
			break;
		
			case 'e':
				printf(". ");
			break;
		
			case 'f':
				printf("..-.");
			break;
		
			case 'g':
				printf("--. ");
			break;
		
			case 'h':
				printf(".... ");
			break;
		
			case 'i':
				printf(".. ");
			break;
		
			case 'j':
				printf(".--- ");
			break;
		
			case 'k':
				printf("-.- ");
			break;
		
			case 'l':
				printf(".-.. ");
			break;
		
			case 'm':
				printf("-- ");
			break;
		
			case 'n':
				printf("-. ");
			break;
		
			case 'o':
				printf("--- ");
			break;
		
			case 'p':
				printf(".--. ");
			break;
		
			case 'q':
				printf("--.- ");
			break;
		
			case 'r':
				printf(".-. ");
			break;
		
			case 's':
				printf("... ");
			break;
		
			case 't':
				printf("- ");
			break;
	
			case 'u':
				printf("..- ");
			break;
		
			case 'v':
				printf("...- ");
			break;
		
			case 'w':
				printf(".-- ");
			break;
		
			case 'x':
				printf("-..- ");
			break;
		
			case 'y':
				printf("-.-- ");
			break;
		
			case 'z':
				printf("--.. ");
			break;
			
			case ' ':
				printf("/ ");
			break;
		}
	}
}

int main(int argc, char *argv[])
{
	char str[500]; /*string*/
	FILE *f = fopen(argv[1], "r"); /*open file through console*/
	fgets(str, 500, f); /*convert file into string*/
	morse(str); /*convert to morse code*/
	fclose(f); /*close file*/
	
	return 0;
}