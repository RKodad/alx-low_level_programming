#include "main.h"
/**
 * main - print putchar
 *
 * return: Always 0
 */
int main(void)
{
	char myVar[] = "_putchar";
	int i = 0;

	while (myVar[i] != '\0')
	{
		_putchar(myVar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
