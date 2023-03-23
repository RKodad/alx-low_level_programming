#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: int type digit
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
