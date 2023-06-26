#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *_strlen - check the code
 *@s: variable
 * Return: Always c.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0 ; s[c] != '\0' ; c++)
		;

	return (c);
}
