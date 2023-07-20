#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name- gets input
 *@name: stores first input
 *@f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
