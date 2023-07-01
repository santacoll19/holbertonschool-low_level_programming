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

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		for (n = 0; n < 13; n++)
		{
			if (s[i] == j[n])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
		return (s);
}
