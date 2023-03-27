#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int n = str.length();

	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}
