#include "main.h"

/**
 *int _isalpha - check the code.
 * Return: Always 0.
 * @c: trying alpha
 */
int _isalpha(int c)
{
	if ((c >= 97) && (c <= 122))
	{
	return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
	return (1);
	}
	else
	return (0);
}
