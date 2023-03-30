#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int a, n;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (n = 0; x[n] != '\0'; n++)
		{
			if (s[a] == x[n])
			{
				s[a] = y[n];
				break;
			}
		}
	}

	return (s);
}
