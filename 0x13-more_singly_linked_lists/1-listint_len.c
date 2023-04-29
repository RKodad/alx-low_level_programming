#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t x = 0;

	while (c != NULL)
	{
		x += 1;
		c = c->next;
	}
	return (x);
}
