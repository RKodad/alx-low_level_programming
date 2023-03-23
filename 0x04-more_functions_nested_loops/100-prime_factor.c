#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	int d;
	long int n; 
	n = 612852475143;

	for (d = (int) sqrt(n); d > 2; d++)
	{
		if (n % d == 0)
		{
			printf("%d is the largest prime factor !", d);
			break;
		}
	}

	return (0);
}
