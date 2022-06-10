#include "lists.h"

/**
 *dlistint_len - print all the elements
 *@h: The head oh the list
 *Return: the number of numbers
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tempo = h;
size_t x = 0;
while (tempo)
{
x += 1;
tempo = tempo->next;
}
return (x);
}
