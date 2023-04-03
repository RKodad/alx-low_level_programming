#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y, p;

	x = 0;
	p = 0;
	while (haystack[x] != '\0')
	{
		y = 0;
		while (needle[y + p] != '\0' && haystack[x + p] != '\0'
		       && needle[y + p] == haystack[x + p])
		{
			if (haystack[y + p] != needle[y + p])
				break;
			p++;
		}
		if (needle[y + p] == '\0')
			return (&haystack[x]);
		y++;
		x++;
	}

	return (NULL);
}
