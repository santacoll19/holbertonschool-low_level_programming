#include "main.h"
/**
 * _strncat - check code.
 * Return: Return a pointer to the resulting string dest
 * @src: sources
 * @dest: destination
 * @n: number of bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, lenght;

	lenght = 0;

	while (dest[lenght] != '\0')
		lenght++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[lenght + i] = src[i];
	}
	dest[lenght + i] = '\0';
	return (dest);
}
