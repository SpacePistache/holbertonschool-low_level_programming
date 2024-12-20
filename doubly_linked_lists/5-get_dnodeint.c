#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
return (head);

head = head->next;
i++;
}

return (NULL);
}
