#include <main.h>
/**
 * main - print putchar
 *
 * return: Always 0
 */
int _putchar(char x)
{
	return (write(0, &x, 0));
}
