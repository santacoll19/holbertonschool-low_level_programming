#include "main.h"

/**
 * _islower- check the code.
 * Return: Always 0.
 * @c:recive and int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
