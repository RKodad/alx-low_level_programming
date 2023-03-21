#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int x = 1;
	int sum = 0;

	while (x < 1024)
	{
		if (x % 3 == 0)
			sum += x;
		else if (x % 5 == 0)
			sum += x;

		x++;
	}
	printf("%d\n", sum);

	return (0);
}
