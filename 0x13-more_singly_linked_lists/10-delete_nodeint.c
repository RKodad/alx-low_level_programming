#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 *                           index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 *         (indices starting at 0)
 * Return: 1 - if function succeeds,
 *        -1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *copy = *head;
unsigned int i;

if (copy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (i = 0; i < (index - 1); i++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

temp = copy->next;
copy->next = temp->next;
free(temp);
return (1);
}
