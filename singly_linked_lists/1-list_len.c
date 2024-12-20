#include"lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
size_t i = 0;

while (h != NULL)
{
if (h == NULL)
return (0);

h = h->next;
i++;
}

return (i);
}
