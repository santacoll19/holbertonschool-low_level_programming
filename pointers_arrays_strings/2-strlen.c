#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *strlen - check the code
 *@s: variable
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0 ; *s != 0 ; c++)
		;

	return (c);
}
