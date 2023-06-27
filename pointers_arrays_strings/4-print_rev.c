#include <stdio.h>
#include "main.h"
/**
 *print_rev - check code.
 *@s:variable
 */

void print_rev(char *s)
{
	int c = 0;

	for (c = 0; s[c] != '\0';)
		c++;

	while (c)
		_putchar(s[--c]);

	_putchar('\n');
}
