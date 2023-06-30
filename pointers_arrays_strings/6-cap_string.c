#include "main.h"

/**
 *cap_string: check code.
 *@s: string.
 */

char *cap_string(char *s)
{
	int i, n;

	char j[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (n = 0; n < 13; n++)
		{
			if (str[i] == j[n])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
		return (str);
}
