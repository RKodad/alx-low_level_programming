#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: type int integer
 * Description: print +, 0, or - depending on number, along with return
 * return: 1 if +, -1 if - or 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}