#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t
 * @h: pointer to the head node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
unsigned int len = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
len++;
}
return (len);
}
