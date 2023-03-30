#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: string
 * Return: `s`
 */

char *cap_string(char *s)
{
	int i, b;
	int t;
	char c[] = ",;.!?(){}\n\t\" ";

	for (i = 0, t = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			t = 1;
		for (b = 0; c[b] != '\0'; b++)
		{
			if (c[b] == s[i])
				t = 1;
		}

		if (t)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				t = 0;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
				t = 0;
			else if (s[i] > 47 && s[i] < 58)
				t = 0;
		}
	}
	return (s);
}
