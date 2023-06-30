#include "main.h"
/**
 * reverse_array - reverse the content of an array of intergers
 * @n: is the number of elements of the array
 * @a: is the array
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n-- ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
