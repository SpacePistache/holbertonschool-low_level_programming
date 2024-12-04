#include "lists.h"
#include <stdlib.h>
/**
 * free_list - liberate the memory and list.
 * @head: Pointer that is going to be freed.
 * Return: Nothing, we're voidin' boys.
 */
void free_list(list_t *head)
{

list_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}

}
