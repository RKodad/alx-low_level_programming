#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= power; a++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char f;

	f = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
