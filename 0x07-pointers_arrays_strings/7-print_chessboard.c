#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int i, c;

	i = 0;
	while (i < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[i][c]);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
