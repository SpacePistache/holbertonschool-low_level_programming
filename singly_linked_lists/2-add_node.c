#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - creating a new node at the start of the list.
 * @head: double pointer to the start of the list.
 * @str: string to copied and stored in new node.
 *
 * Return: Address of new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{

list_t *startnode;
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

startnode = malloc(sizeof(list_t));
if (!startnode)
{
free(str_copy);
return (NULL);
}

startnode->str = str_copy;
startnode->len = str_len;
startnode->next = *head;

*head = startnode;

return (startnode);

}
