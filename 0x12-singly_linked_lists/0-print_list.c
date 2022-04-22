#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements
 * @h: pointer to the node
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
unsigned int lenght;
lenght = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
++lenght;
h =  h->next;
}
return (lenght);
}
