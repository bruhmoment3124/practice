#include <stdio.h>

int main(void)
{
	char s[256]; /*string*/
	FILE *f = fopen("text.txt", "r"); /*opens file text.txt in read only mode*/
	fgets(s, 256, f); /*loads text.txt into a string*/
	printf("%s", s);
	fclose(f); /*closes text.txt*/

	return 0;
}
