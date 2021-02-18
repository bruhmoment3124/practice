#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(0));
	int e = rand() % 5; /*element*/
	const char *w[5]; /*words*/

	/*words*/
	w[0] = "pie";
	w[1] = "fly";
	w[2] = "guy";
	w[3] = "sty";
	w[4] = "rye";

	printf("random word: %s", w[e]); /*print random word*/

	return 0;
}
