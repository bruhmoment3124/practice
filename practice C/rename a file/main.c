#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char old_name[8] = "text.txt";
	char new_name[200];
	FILE *f = fopen(old_name, "r+"); /*opens text file*/
	printf("what would you like to rename text.txt:\n");
	scanf("%s", new_name); /*scans for new name*/
	rename(old_name, new_name); /*replaces old name with new name*/
	
	return 0;
}