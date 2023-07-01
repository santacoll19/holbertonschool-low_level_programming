#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: to where Im sending the copy.
 * @src: from where Im coping
 * @n: number of spaces to fill.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
