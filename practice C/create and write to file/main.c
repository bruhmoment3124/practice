#include <stdio.h>

int main(void)
{
	char str[200];
	FILE *f;
	f = fopen("text.txt", "w+");
	
	printf("write contents of a file:\n");
	scanf("%s", &str);
	fprintf(f, "%s", str);
	
	return 0;
}