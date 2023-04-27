#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *c;
	size_t l;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	n->len = l;
	n->next = NULL;
	c = *head;

	if (c == NULL)
	{
		*head = n;
	}
	else
	{
		while (c->next != NULL)
			c = c->next;
		c->next = n;
	}

	return (*head);
}
