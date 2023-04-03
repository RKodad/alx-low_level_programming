#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Print the sum of the 2 diagonals of a square matrix of integers
 * @a: 2d array of int types
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int b, sum, s;

	b = 0;
	sum = 0;
	s = size * size;
	while (b < s)
	{
		if (b % (size + 1) == 0)
			sum += a[b];
		b++;
	}
	printf("%d, ", sum);

	sum = 0;
	b = 0;
	while (b < s)
	{
		if (b % (size - 1) == 0 && b != (s - 1) && b != 0)
			sum += a[b];
		b++;
	}
	printf("%d\n", sum);
}
