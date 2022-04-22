#include "lists.h"
#include <stdio.h>

/**
 * list_len - the number of elemnts in the list
 * @h: the pointer to the head list
 * Return: we return the number of elements
 */
size_t list_len(const list_t *h)
{
unsigned int len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
