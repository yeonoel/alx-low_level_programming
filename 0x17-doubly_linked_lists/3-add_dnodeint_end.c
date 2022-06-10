#include "lists.h"i

/**
 * add_dnodeint_end - add node to the end of the list
 * @head: the head of the list
 * @n: the data of the new node
 * Return: the pointer the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tempo = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (!tempo)
	{
		*head = newnode;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = newnode;
		newnode->prev = tempo;
	}

	return (newnode);
}
