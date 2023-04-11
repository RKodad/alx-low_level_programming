#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *p;
	int a, e;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	p = malloc(a * sizeof(*p) + 1);
	if (p == NULL)
		return (NULL);

	for (e = 0; e < a; e++)
		p[e] = str[e];
	p[e] = '\0';

	return (p);
}
