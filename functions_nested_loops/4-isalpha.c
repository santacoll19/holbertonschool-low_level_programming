#include "main.h"

/**
 *int _isalpha - check the code.
 * Return: Always 0.
 * @c: trying alpha
 */
int _isalpha(int c)
{
	
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
