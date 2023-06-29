#include "main.h"

/**
 * _strcat - check code.
 * @dest: original
 * @src: to be added to dest
 * Return: a pointer to the resulting string of dest.
 */
char *_strcat(char *dest, char *src)
{
	int size, move;

	size = 0;
	move = 0;

	while (dest[size] != '\0')
		size++;

	while (src[move] != '\0')
	{
		dest[size] = src[move];
		size++;
		move++;
	}

	dest[size] = '\0';

	return (dest);
}
