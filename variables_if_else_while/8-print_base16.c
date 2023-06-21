#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char m;

	for (n = 0; n < 10; n++)
		putchar(n + '0');

	for (m = 'a'; m <= 'f'; m++)
		putchar(m);

	putchar ('\n');
	return (0);
}
