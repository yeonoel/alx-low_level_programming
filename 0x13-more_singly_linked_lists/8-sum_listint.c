#include "lists.h"

/**
 * sum_listint - return the sum of all tthe data
 * @head: the pointer to the head of the list
 * Return: the int sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
return (0);
}
else
{
while (head)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
