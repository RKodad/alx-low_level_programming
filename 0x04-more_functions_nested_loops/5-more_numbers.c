#include "main.h"

/**
 * more_numbers - prints 10 times the numbers (from 0 to 14)
 * followed by a new line
 */

void more_numbers(void)
{
	int x, n;

	for (x = 0; x < 10; x++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
