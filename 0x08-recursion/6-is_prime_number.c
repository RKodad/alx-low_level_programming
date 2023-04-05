#include "main.h"

/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int prime_number(int a, int n);

	int a = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n % n == 0 || n % 1 == 0)
	{
		if (prime_number(a, n) != 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * prime_number - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @a: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */

int prime_number(int a, int n)
{
	if (a < n)
	{
		if (n % a == 0)
		{
			return (0);
		}
		else
		{
			++a;
			return (prime_number(a, n));
		}
	}
	else
	{
		return (1);
	}
}
