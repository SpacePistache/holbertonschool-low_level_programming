#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Add new node at the end of the list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to duplicate and store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *str_copy;
unsigned int str_len = 0;
if (str)
{
str_copy = strdup(str);
if (!str_copy)
return (NULL);
while (str[str_len])
str_len++;
}
else
str_copy = NULL;
new_node = malloc(sizeof(list_t));
if (!new_node)
{
free(str_copy);
return (NULL);
}
new_node->str = str_copy;
new_node->len = str_len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
