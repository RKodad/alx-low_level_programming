#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @r: string
 * Return: r
 */

char *string_toupper(char *r)
{
	int i;

	for (i = 0; r[i] != '\0'; i++)
	{
		if (r[i] >= 'a' && r[i] <= 'z')
		{
			r[i] -= 32;
		}
	}
	return (r);
}
