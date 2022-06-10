#include "lists.h"

/**
 * add_dnodeint - add new node at the beginning
 * @head: The head of the list
 * @n: TRhe new node to insert
 * Return: the pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (!*head)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
