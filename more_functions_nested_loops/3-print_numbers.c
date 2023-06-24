#include "main.h"
#include <stdio.h>

/**
 * print_numbers- check the code for Holberton School students.
 * Return: Always 0
 * @c: variable
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	c++;
	}
	_putchar('\n');
}
