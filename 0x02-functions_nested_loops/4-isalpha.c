#include "main.h"

/**
 * _isalpha - Return 1 if is a letter, 0 if not.
 * @c: charachter type letter
 * Return: 1 if letter, 0 if not letter
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
