#include "main.h"
#include <stdio.h>

/**
 * print_numbers- check the code for Holberton School students.
 * Return: Always 0
 * @x: variable
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
}
