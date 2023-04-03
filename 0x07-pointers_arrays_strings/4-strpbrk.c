#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;
	char *c;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				c = &s[x];
				return (c);
			}
			y++;
		}
		x++;
	}

	return (0);
}
