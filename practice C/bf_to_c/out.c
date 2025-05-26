#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint8_t mem[30000] = {0}, *p = mem;

	*p += 8;
	if(*p == 0) goto l1;
	l2:
	p += 1;
	*p += 4;
	if(*p == 0) goto l3;
	l4:
	p += 1;
	*p += 2;
	p += 1;
	*p += 3;
	p += 1;
	*p += 3;
	p += 1;
	*p += 1;
	p -= 4;
	*p -= 1;
	if(*p != 0) goto l4;
	l3:
	p += 1;
	*p += 1;
	p += 1;
	*p += 1;
	p += 1;
	*p -= 1;
	p += 2;
	*p += 1;
	if(*p == 0) goto l5;
	l6:
	p -= 1;
	if(*p != 0) goto l6;
	l5:
	p -= 1;
	*p -= 1;
	if(*p != 0) goto l2;
	l1:
	p += 2;
	printf("%c", *p);
	p += 1;
	*p -= 3;
	printf("%c", *p);
	*p += 7;
	printf("%c", *p);
	printf("%c", *p);
	*p += 3;
	printf("%c", *p);
	p += 2;
	printf("%c", *p);
	p -= 1;
	*p -= 1;
	printf("%c", *p);
	p -= 1;
	printf("%c", *p);
	*p += 3;
	printf("%c", *p);
	*p -= 6;
	printf("%c", *p);
	*p -= 8;
	printf("%c", *p);
	p += 2;
	*p += 1;
	printf("%c", *p);
	p += 1;
	*p += 2;
	printf("%c", *p);

	return 0;
}