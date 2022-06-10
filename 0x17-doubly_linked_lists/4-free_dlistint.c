#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (!head)
	{
		return;
	}

	while (temp->next)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
	free(head);
}
