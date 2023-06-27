include <stdio.h>
#include "main.h"

/*
 *print_rev- check code.
 @s:variable
 */

void print_rev(char *s)
{
	int c = 0;
	char *end = s;

	while (*end != '\0')
	{
		c++;
		end++;
	}

	for (int i = c - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
