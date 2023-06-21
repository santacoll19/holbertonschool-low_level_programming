#include "main.h"

/**
 * void print_alphabet_x10- prints 10 times the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char l;
	int x = 0;

	while (x++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	}
}
