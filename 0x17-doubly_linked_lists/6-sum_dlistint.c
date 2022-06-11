#include "lists.h"

/**
 * sum_dlistint - return the sum of allthe data
 * @head: the head of the list
 * Return: the int sum all the data
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tempo = head;

	if (head == NULL)
	{
		return (0);
	}
	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
