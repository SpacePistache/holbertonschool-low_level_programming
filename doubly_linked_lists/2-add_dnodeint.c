#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a node to the start of the list.
 * @n: Data to go into the node.
 * @head: Is the pointer to starting node.
 *
 * Return: address of new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);

if (head == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
