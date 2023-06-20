#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- lowercase alphabet in reverse
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
