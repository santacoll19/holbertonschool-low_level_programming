#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Single digit numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;

	for (n = '0'; n < 10; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
