#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Prints all the elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
