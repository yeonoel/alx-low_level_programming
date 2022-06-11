#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a linked list
 * @head: the head list
 * @index: the index of node to return
 * Return: pointer to the node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp->next)
	{
		temp =  temp->next;
		i += 1;
		if (i == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
