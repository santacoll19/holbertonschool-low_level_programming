#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the code
 *@a: variables
 *@b: variables
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}
