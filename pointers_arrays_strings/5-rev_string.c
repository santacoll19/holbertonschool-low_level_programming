#include "main.h"
#include <stdio.h>
/**
 *rev_string - swap the code
 *@s: variable.
 */

void rev_string(char *s)
{
	int length = 0;
	int end;
	int beg;
	int tmp;

	while (*(s + length))
		length++;

	end = length - 1;

	for (beg = 0; beg < length + 1; end--, beg++)
	{
		tmp = s[beg];
		s[beg] = s[end];
		s[end] = tmp;
	}


}
