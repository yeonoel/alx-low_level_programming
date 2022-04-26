#include "lists.h"

/**
 * listint_len - return the number of elements
 * @h: the pointer to the head of the list
 * Return: number of elements in a linked
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;
while (h)
{
len++;
h = h->next;
}
return (len);
}
