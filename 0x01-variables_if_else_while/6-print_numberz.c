/*
 * File: 6-print_numberz.c
 */
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar("%d", num);
	putchar('\n');
	return (0);
}
