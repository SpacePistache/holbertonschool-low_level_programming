#include "lists.h"
#include<stdio.h>
/**
 * print_dlistint - Prints all the elements of a list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
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
