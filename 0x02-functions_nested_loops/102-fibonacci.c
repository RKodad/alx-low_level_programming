#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * the numbers must be separated by comma, followed by a space 
 * Return: 0
 */

int main(void)
{
	int c = 2;
	long int x = 1, y = 2;
	long int z;

	printf("%lu, ", x);
	while (c <= 50)
	{
		if (c == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		c++;
	}

	return (0);
}
